
#include "udpSender.h"


bool udpSender::init()
{
        if ( (sockfd_ = socket(AF_INET, SOCK_DGRAM, 0)) <= 0 ) {
        return false;
    }
    memset(&remote_addr_, 0, sizeof(remote_addr_));
    return true;
}


bool udpSender::setIpPort(QString remote_ip, QString port)
{
        remote_addr_.sin_family = AF_INET;
        remote_addr_.sin_port = htons(port.toInt());
        if (inet_pton(AF_INET, remote_ip.toStdString().c_str(), &remote_addr_.sin_addr)<=0)
            return false;
        return true;
}

bool udpSender::send()
{
	std::lock_guard<std::mutex> lock(mutex_);
    unsigned int slen = sizeof(remote_addr_);
    BridgeProtoSerializedBuf<ADCTrajectory> proto_buf;
	proto_buf.Serialize(pb_msg_, proto_name_);
	for (size_t j = 0; j < proto_buf.GetSerializedBufCount(); j++) 
		sendto(sockfd_, 
			proto_buf.GetSerializedBuf(j),
		    proto_buf.GetSerializedBufSize(j), 
		    0,(struct sockaddr *) &remote_addr_, slen);
    return true;
}
void udpSender::setEStop(bool is_estop)
{
	std::lock_guard<std::mutex> lock(mutex_);
	estop_->set_is_estop(is_estop);
}
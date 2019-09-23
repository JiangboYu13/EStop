#pragma once 
#include <QObject>
#include <QString>
#include "modules/planning/proto/planning.pb.h"
#include "modules/bridge/common/bridge_proto_serialized_buf.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 
#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h> 
#include <iostream>
#include <thread>
#include <memory>
#include <mutex>
using apollo::planning::ADCTrajectory;
using apollo::planning::EStop;
using apollo::bridge::BridgeProtoSerializedBuf;
class udpSender: public QObject
{
    Q_OBJECT
public:
	explicit udpSender(QObject *parent = nullptr):QObject(parent),
	estop_(std::make_shared<EStop>()),pb_msg_(std::make_shared<ADCTrajectory>())
	{
		estop_->set_is_estop(true);
		pb_msg_->set_allocated_estop(estop_.get());
	};


	~udpSender() = default;
	bool init();
	Q_INVOKABLE void setEStop(bool is_estop);
	Q_INVOKABLE bool setIpPort(QString remote_ip, QString port);
	Q_INVOKABLE bool send();

private:
	struct sockaddr_in remote_addr_;
    std::string proto_name_="Trajectory";
	std::shared_ptr<ADCTrajectory> pb_msg_;
	std::shared_ptr<EStop> estop_;
	std::mutex mutex_;
	int sockfd_=0; 
};


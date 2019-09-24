import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.2
import QtQuick.Extras 1.4
Window {
    id: window
    visible: true
    width: 640
    height: 480
    color: "#b3b3b3"
    title: qsTr("ESTOP")
    maximumHeight: height
    maximumWidth: width

    minimumHeight: height
    minimumWidth: width
    GridLayout {
        id: gridLayout
        anchors.right: parent.right
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.rightMargin: 12
        anchors.leftMargin: 12
        anchors.topMargin: 12
        columnSpacing: 8
        rowSpacing: 8
        rows: 7
        columns: 4
        enabled: true

        Label {
            id: label1
            text: qsTr("Ip Address")
        }
        Label {
            id: label2
            text: qsTr("Port")
        }
        Label {
            id: label3
            text: qsTr("")
        }
        Label {
            id: label4
            text: qsTr("")
        }

        TextField {
            id: ip_addr
            Layout.fillWidth: true
            text: qsTr("127.0.0.1")
        }

        TextField {

            id: port
            Layout.fillWidth: true
            text: qsTr("5000")
        }

        Button {
            id:send_bt
            text: "Send"
            onClicked: {
                if (!timer.running)
                {
                    if (sender.setIpPort(ip_addr.text, port.text))
                    {
                        timer.running = true;
                        send_bt.text = "Stop"
                        ip_addr.enabled = false;
                        port.enabled = false;
                    }
                }
                else
                {
                    timer.running = false;
                    send_bt.text = "Send"
                    ip_addr.enabled = true;
                    port.enabled = true;
                }

            }
        }


    }
    ToggleButton
    {
        width: 300
        height: 300
        anchors.rightMargin: 150
        anchors.leftMargin: 150
        anchors.bottomMargin: 50
        id: togglebutton
        anchors.right: parent.right
        anchors.left: parent.left
        text: qsTr("ESTOP OFF")
        anchors.bottom: parent.bottom
        Layout.alignment: Qt.AlignHCenter
        checked: false
        onClicked:
        {
            if (timer.running)
            {
                if (checked)
                    togglebutton.text = qsTr("ESTOP ON")
                else
                    togglebutton.text = qsTr("ESTOP OFF")
                sender.setEStop(checked)
            }
            else
                checked = false
        }
    }
    Timer
    {
       property int count: 0
       id:timer
       interval: 100;
       running: false;
       repeat: true;
       onTriggered:
       {
           sender.send()
       }
    }


}


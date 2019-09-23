#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "udpSender.h"
#include "modules/canbus/proto/chassis.pb.h"
int main(int argc, char *argv[])
{
    apollo::canbus::Chassis chassis;
    chassis.set_speed_mps(999);
    udpSender sender;
    if (!(sender.init())) return false;
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("sender", &sender);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

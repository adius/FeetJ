import QtQuick 2.0
import QtMultimedia 5.0
import mtq.widgets 1.0
//import "audioLogic.js" as audioLogic


Rectangle {
    id: floor
    width: 4096
    height: 2400
    color: "#333333"

    DjArea {
        anchors.horizontalCenter: parent.horizontalCenter
    }
}

import QtQuick 2.0
import mtq.widgets 1.0

Item {
    id: effectLane
    width: 900
    anchors.right: parent.right

    EffectPad {
        anchors.horizontalCenter: parent.horizontalCenter
    }

    EffectControls {
        anchors.right: parent.right
    }
}

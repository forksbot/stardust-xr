import QtQuick 2.12
import QtQuick3D 1.0

import Stardust.Core 1.0
import StardustAPI.Fields 1.0
import StardustAPI.Input 1.0

import QtQuick3D.OpenXR 1.0

import "../render"

Node {
    id:sceneRoot

    SceneEnvironment {
        id: skybox

        probeBrightness: 1000
        backgroundMode: SceneEnvironment.Color
        clearColor: "#ff444444"

        Component.onCompleted: OpenXR.setEnvironment(skybox)
    }

    Component.onCompleted: {
        ModuleLoader.sceneRoot = this;
        ModuleLoader.reloadModuleList();
        ModuleLoader.loadAllModules();
    }
}

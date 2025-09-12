#include "PlayerInputProxyComponent.h"

UPlayerInputProxyComponent::UPlayerInputProxyComponent() {
    this->CameraPanDeadzoneRadius = 1000.00f;
    this->CameraPanLerpAlphaPerSecond = 0.80f;
    this->CameraMousePositionNormalizedEdgePanThreshold = 0.70f;
}



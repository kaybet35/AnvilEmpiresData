#include "DebugCameraController.h"

ADebugCameraController::ADebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    const FProperty* p_bIsLocalPlayerController = GetClass()->FindPropertyByName("bIsLocalPlayerController");
    (*p_bIsLocalPlayerController->ContainerPtrToValuePtr<bool>(this)) = true;
    this->bShowSelectedInfo = true;
    this->bIsFrozenRendering = false;
    this->bIsOrbitingSelectedActor = false;
    this->bOrbitPivotUseCenter = false;
    this->bEnableBufferVisualization = false;
    this->bEnableBufferVisualizationFullMode = false;
    this->bIsBufferVisualizationInputSetup = false;
    this->bLastDisplayEnabled = true;
    this->DrawFrustum = NULL;
    this->OriginalControllerRef = NULL;
    this->OriginalPlayer = NULL;
    this->SpeedScale = 1.00f;
    this->InitialMaxSpeed = 0.00f;
    this->InitialAccel = 0.00f;
    this->InitialDecel = 0.00f;
}

void ADebugCameraController::ToggleDisplay() {
}

void ADebugCameraController::ShowDebugSelectedInfo() {
}

void ADebugCameraController::SetPawnMovementSpeedScale(float NewSpeedScale) {
}




AActor* ADebugCameraController::GetSelectedActor() const {
    return NULL;
}



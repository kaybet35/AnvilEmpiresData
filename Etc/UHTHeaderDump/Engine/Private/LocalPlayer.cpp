#include "LocalPlayer.h"
#include "PlayerController.h"

ULocalPlayer::ULocalPlayer() {
    this->ViewportClient = NULL;
    this->AspectRatioAxisConstraint = AspectRatio_MaintainXFOV;
    this->PendingLevelPlayerControllerClass = APlayerController::StaticClass();
    this->bSentSplitJoin = false;
    this->ControllerId = -1;
}



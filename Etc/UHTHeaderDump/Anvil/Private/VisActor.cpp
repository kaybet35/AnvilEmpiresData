#include "VisActor.h"

AVisActor::AVisActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseWindowType = EHUDWindowType::None;
    this->bUseForceCameraZoom = false;
    this->bNightVisibility = false;
    this->bNoCheckOnCeilVisibility = false;
    this->bUseInteractionOutline = false;
    this->InteractionIcon = NULL;
    this->AnimSpeed = 0.00f;
    this->TemplateCDO = NULL;
    this->bGenerateFoundationDescription = false;
    this->MeshVisibilityDataComponent = NULL;
    this->PositionSmoothSpeed = 0.00f;
    this->RotationSmoothSpeed = 0.00f;
    this->ClientMovementSmoothingDistance = 5.00f;
    this->bHasLandscapeCollisions = false;
    this->bUseDepthStencilForInteractionHighlight = false;
}



#include "ControlRigControlActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AControlRigControlActor::AControlRigControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->ActorToTrack = NULL;
    this->ControlRigClass = NULL;
    this->bRefreshOnTick = true;
    this->bIsSelectable = true;
    this->MaterialOverride = NULL;
    this->ColorParameter = TEXT("Color");
    this->bCastShadows = false;
    this->ActorRootComponent = (USceneComponent*)RootComponent;
}

void AControlRigControlActor::ResetControlActor() {
}

void AControlRigControlActor::Refresh() {
}

void AControlRigControlActor::Clear() {
}



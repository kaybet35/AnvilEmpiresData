#include "EntityActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "EntityActorRootComponent.h"

AEntityActor::AEntityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UEntityActorRootComponent>(TEXT("RootComponent"));
    this->EntityTemplate = NULL;
    this->bShowVisActorPreview = true;
    this->VisActorPreview = CreateDefaultSubobject<UChildActorComponent>(TEXT("VisPreview"));
    this->SceneComponent = (UEntityActorRootComponent*)RootComponent;
    this->VisActorPreview->SetupAttachment(RootComponent);
}



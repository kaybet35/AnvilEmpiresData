#include "VisSignPost.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=LifetimeDataComponent -FallbackName=LifetimeDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SignPostDataComponent -FallbackName=SignPostDataComponent
#include "VisStaticMeshComponent.h"

AVisSignPost::AVisSignPost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SignPostDataComponent = CreateDefaultSubobject<USignPostDataComponent>(TEXT("SignPostDataComponent"));
    this->LifetimeDataComponent = CreateDefaultSubobject<ULifetimeDataComponent>(TEXT("LifetimeDataComponent"));
    this->Mesh = CreateDefaultSubobject<UVisStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}



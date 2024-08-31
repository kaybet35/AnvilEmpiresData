#include "VisFoundationBottomMeshDecorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

UVisFoundationBottomMeshDecorComponent::UVisFoundationBottomMeshDecorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->BottomMesh = NULL;
    this->BottomMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BottomMeshComp"));
}



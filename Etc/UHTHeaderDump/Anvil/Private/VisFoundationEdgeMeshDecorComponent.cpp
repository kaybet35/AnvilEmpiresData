#include "VisFoundationEdgeMeshDecorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

UVisFoundationEdgeMeshDecorComponent::UVisFoundationEdgeMeshDecorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(2);
    this->InnerAngle = 90.00f;
    this->EdgeMesh = NULL;
    this->EdgeMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EdgeMeshComp"));
}



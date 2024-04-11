#include "VisSplineComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SplineDataComponent -FallbackName=SplineDataComponent

UVisSplineComponent::UVisSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("GroundDecalComponent"));
    this->PreviewPieceLength = 0.00f;
    this->DecalMaterial = NULL;
    this->MaterialOverride = NULL;
    this->EndPieceMesh = NULL;
    this->SplineDataComponent = CreateDefaultSubobject<USplineDataComponent>(TEXT("SplineDataComponent"));
}



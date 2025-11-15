#include "MaterialBillboardComponent.h"

UMaterialBillboardComponent::UMaterialBillboardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMaterialBillboardComponent::SetElements(const TArray<FMaterialSpriteElement>& NewElements) {
}

void UMaterialBillboardComponent::AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve) {
}



#include "MeshComponent.h"

UMeshComponent::UMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bUseAsOccluder = true;
    this->CastShadow = true;
    this->OverlayMaterial = NULL;
    this->OverlayMaterialMaxDrawDistance = 0.00f;
    this->bEnableMaterialParameterCaching = false;
}

void UMeshComponent::SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue) {
}

void UMeshComponent::SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue) {
}

void UMeshComponent::SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance) {
}

void UMeshComponent::SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial) {
}

void UMeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups) {
}

bool UMeshComponent::IsMaterialSlotNameValid(FName MaterialSlotName) const {
    return false;
}

UMaterialInterface* UMeshComponent::GetOverlayMaterial() const {
    return NULL;
}

TArray<FName> UMeshComponent::GetMaterialSlotNames() const {
    return TArray<FName>();
}

TArray<UMaterialInterface*> UMeshComponent::GetMaterials() const {
    return TArray<UMaterialInterface*>();
}

int32 UMeshComponent::GetMaterialIndex(FName MaterialSlotName) const {
    return 0;
}



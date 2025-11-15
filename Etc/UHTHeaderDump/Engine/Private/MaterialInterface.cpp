#include "MaterialInterface.h"

UMaterialInterface::UMaterialInterface() {
    this->SubsurfaceProfile = NULL;
}

void UMaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse) {
}

UPhysicalMaterialMask* UMaterialInterface::GetPhysicalMaterialMask() const {
    return NULL;
}

UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterialFromMap(int32 Index) const {
    return NULL;
}

UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterial() const {
    return NULL;
}

FMaterialParameterInfo UMaterialInterface::GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction) const {
    return FMaterialParameterInfo{};
}

TEnumAsByte<EBlendMode> UMaterialInterface::GetBlendMode() const {
    return BLEND_Opaque;
}

UMaterial* UMaterialInterface::GetBaseMaterial() {
    return NULL;
}



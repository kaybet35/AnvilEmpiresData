#include "SkeletalMesh.h"

USkeletalMesh::USkeletalMesh() {
    this->Skeleton = NULL;
    this->SkelMirrorAxis = EAxis::X;
    this->SkelMirrorFlipAxis = EAxis::Z;
    this->bUseFullPrecisionUVs = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bHasBeenSimplified = false;
    this->bHasVertexColors = false;
    this->bEnablePerPolyCollision = false;
    this->BodySetup = NULL;
    this->PhysicsAsset = NULL;
    this->ShadowPhysicsAsset = NULL;
    this->bSupportRayTracing = true;
    this->RayTracingMinLOD = 0;
    this->ClothLODBiasMode = EClothLODBiasMode::MappingsToSameLOD;
    this->PostProcessAnimBlueprint = NULL;
    this->DefaultMeshDeformer = NULL;
}

void USkeletalMesh::SetSkeleton(USkeleton* InSkeleton) {
}

void USkeletalMesh::SetMorphTargets(const TArray<UMorphTarget*>& InMorphTargets) {
}

void USkeletalMesh::SetMinLODForQualityLevels(const TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32 Default) {
}

void USkeletalMesh::SetMeshClothingAssets(const TArray<UClothingAssetBase*>& InMeshClothingAssets) {
}

void USkeletalMesh::SetMaterials(const TArray<FSkeletalMaterial>& InMaterials) {
}

void USkeletalMesh::SetLODSettings(USkeletalMeshLODSettings* InLODSettings) {
}

void USkeletalMesh::SetDefaultAnimatingRig(TSoftObjectPtr<UObject> InAnimatingRig) {
}

int32 USkeletalMesh::NumSockets() const {
    return 0;
}

TArray<FString> USkeletalMesh::K2_GetAllMorphTargetNames() const {
    return TArray<FString>();
}

bool USkeletalMesh::IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const {
    return false;
}

USkeletalMeshSocket* USkeletalMesh::GetSocketByIndex(int32 Index) const {
    return NULL;
}

USkeleton* USkeletalMesh::GetSkeleton() const {
    return NULL;
}

UPhysicsAsset* USkeletalMesh::GetShadowPhysicsAsset() const {
    return NULL;
}

UPhysicsAsset* USkeletalMesh::GetPhysicsAsset() const {
    return NULL;
}

TArray<UNodeMappingContainer*> USkeletalMesh::GetNodeMappingData() const {
    return TArray<UNodeMappingContainer*>();
}

UNodeMappingContainer* USkeletalMesh::GetNodeMappingContainer(UBlueprint* SourceAsset) const {
    return NULL;
}

TArray<UMorphTarget*> USkeletalMesh::GetMorphTargetsPtrConv() const {
    return TArray<UMorphTarget*>();
}

void USkeletalMesh::GetMinLODForQualityLevels(TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32& Default) const {
}

TArray<UClothingAssetBase*> USkeletalMesh::GetMeshClothingAssets() const {
    return TArray<UClothingAssetBase*>();
}

TArray<FSkeletalMaterial> USkeletalMesh::GetMaterials() const {
    return TArray<FSkeletalMaterial>();
}

USkeletalMeshLODSettings* USkeletalMesh::GetLODSettings() const {
    return NULL;
}

FBoxSphereBounds USkeletalMesh::GetImportedBounds() const {
    return FBoxSphereBounds{};
}

TSoftObjectPtr<UObject> USkeletalMesh::GetDefaultAnimatingRig() const {
    return NULL;
}

FBoxSphereBounds USkeletalMesh::GetBounds() const {
    return FBoxSphereBounds{};
}

USkeletalMeshSocket* USkeletalMesh::FindSocketAndIndex(FName InSocketName, int32& OutIndex) const {
    return NULL;
}



#include "StaticMesh.h"

UStaticMesh::UStaticMesh() {
    this->LightmapUVDensity = 0.00f;
    this->LightMapResolution = 4;
    this->LightMapCoordinateIndex = 0;
    this->DistanceFieldSelfShadowBias = 0.00f;
    this->BodySetup = NULL;
    this->LODForCollision = 0;
    this->bGenerateMeshDistanceField = false;
    this->bStripComplexCollisionForConsole = false;
    this->bHasNavigationData = true;
    this->bSupportUniformlyDistributedSampling = false;
    this->bSupportPhysicalMaterialMasks = false;
    this->bSupportRayTracing = true;
    this->bDoFastBuild = false;
    this->bIsBuiltAtRuntime = false;
    this->bAllowCPUAccess = false;
    this->bSupportGpuUniformlyDistributedSampling = false;
    this->ElementToIgnoreForTexFactor = -1;
    this->NavCollision = NULL;
}

void UStaticMesh::SetStaticMaterials(const TArray<FStaticMaterial>& InStaticMaterials) {
}

void UStaticMesh::SetMinLODForQualityLevels(const TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32 Default) {
}

void UStaticMesh::SetMinimumLODForPlatforms(const TMap<FName, int32>& PlatformMinimumLODs) {
}

void UStaticMesh::SetMinimumLODForPlatform(const FName& PlatformName, int32 InMinLOD) {
}

void UStaticMesh::RemoveSocket(UStaticMeshSocket* Socket) {
}

UStaticMeshDescription* UStaticMesh::GetStaticMeshDescription(int32 LODIndex) {
    return NULL;
}

TArray<FStaticMaterial> UStaticMesh::GetStaticMaterials() const {
    return TArray<FStaticMaterial>();
}

TArray<UStaticMeshSocket*> UStaticMesh::GetSocketsByTag(const FString& InSocketTag) const {
    return TArray<UStaticMeshSocket*>();
}

int32 UStaticMesh::GetNumTriangles(int32 LODIndex) const {
    return 0;
}

int32 UStaticMesh::GetNumSections(int32 InLOD) const {
    return 0;
}

int32 UStaticMesh::GetNumLODs() const {
    return 0;
}

void UStaticMesh::GetMinLODForQualityLevels(TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32& Default) const {
}

void UStaticMesh::GetMinimumLODForQualityLevels(TMap<FName, int32>& QualityLevelMinimumLODs) const {
}

int32 UStaticMesh::GetMinimumLODForQualityLevel(const FName& QualityLevel) const {
    return 0;
}

void UStaticMesh::GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs) const {
}

int32 UStaticMesh::GetMinimumLODForPlatform(const FName& PlatformName) const {
    return 0;
}

int32 UStaticMesh::GetMaterialIndex(FName MaterialSlotName) const {
    return 0;
}

UMaterialInterface* UStaticMesh::GetMaterial(int32 MaterialIndex) const {
    return NULL;
}

FBoxSphereBounds UStaticMesh::GetBounds() const {
    return FBoxSphereBounds{};
}

FBox UStaticMesh::GetBoundingBox() const {
    return FBox{};
}

UStaticMeshSocket* UStaticMesh::FindSocket(FName InSocketName) const {
    return NULL;
}

UStaticMeshDescription* UStaticMesh::CreateStaticMeshDescription(UObject* Outer) {
    return NULL;
}

void UStaticMesh::BuildFromStaticMeshDescriptions(const TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision, bool bFastBuild) {
}

void UStaticMesh::AddSocket(UStaticMeshSocket* Socket) {
}

FName UStaticMesh::AddMaterial(UMaterialInterface* Material) {
    return NAME_None;
}



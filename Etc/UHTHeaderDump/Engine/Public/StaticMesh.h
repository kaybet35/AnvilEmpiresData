#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPerQualityLevels.h"
#include "Interface_AssetUserData.h"
#include "Interface_AsyncCompilation.h"
#include "Interface_CollisionDataProvider.h"
#include "PerPlatformInt.h"
#include "PerQualityLevelInt.h"
#include "StaticMaterial.h"
#include "StreamableRenderAsset.h"
#include "StaticMesh.generated.h"

class UAssetUserData;
class UBodySetup;
class UMaterialInterface;
class UNavCollisionBase;
class UObject;
class UStaticMeshDescription;
class UStaticMeshSocket;

UCLASS(Blueprintable, MinimalAPI)
class UStaticMesh : public UStreamableRenderAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData, public IInterface_AsyncCompilation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerQualityLevelInt MinQualityLevelLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMaterial> StaticMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightmapUVDensity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapResolution;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFieldSelfShadowBias;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODForCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateMeshDistanceField: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStripComplexCollisionForConsole: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasNavigationData: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportUniformlyDistributedSampling: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportPhysicalMaterialMasks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportRayTracing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoFastBuild: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBuiltAtRuntime: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowCPUAccess: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportGpuUniformlyDistributedSampling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshSocket*> Sockets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositiveBoundsExtension;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NegativeBoundsExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds ExtendedBounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementToIgnoreForTexFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNavCollisionBase* NavCollision;
    
public:
    UStaticMesh();

    UFUNCTION(BlueprintCallable)
    void SetStaticMaterials(const TArray<FStaticMaterial>& InStaticMaterials);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLODForQualityLevels(const TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32 Default);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumLODForPlatforms(const TMap<FName, int32>& PlatformMinimumLODs);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumLODForPlatform(const FName& PlatformName, int32 InMinLOD);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSocket(UStaticMeshSocket* Socket);
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshDescription* GetStaticMeshDescription(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStaticMaterial> GetStaticMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStaticMeshSocket*> GetSocketsByTag(const FString& InSocketTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTriangles(int32 LODIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSections(int32 InLOD) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumLODs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinLODForQualityLevels(TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32& Default) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinimumLODForQualityLevels(TMap<FName, int32>& QualityLevelMinimumLODs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinimumLODForQualityLevel(const FName& QualityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinimumLODForPlatform(const FName& PlatformName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaterialIndex(FName MaterialSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetMaterial(int32 MaterialIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBoundingBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshSocket* FindSocket(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable)
    static UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    void BuildFromStaticMeshDescriptions(const TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision, bool bFastBuild);
    
    UFUNCTION(BlueprintCallable)
    void AddSocket(UStaticMeshSocket* Socket);
    
    UFUNCTION(BlueprintCallable)
    FName AddMaterial(UMaterialInterface* Material);
    

    // Fix for true pure virtual functions not being implemented
};


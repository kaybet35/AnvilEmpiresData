#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoneMirrorInfo.h"
#include "EClothLODBiasMode.h"
#include "EPerQualityLevels.h"
#include "Interface_AssetUserData.h"
#include "Interface_CollisionDataProvider.h"
#include "NodeMappingProviderInterface.h"
#include "PerPlatformBool.h"
#include "PerPlatformInt.h"
#include "PerQualityLevelInt.h"
#include "SkeletalMaterial.h"
#include "SkeletalMeshLODInfo.h"
#include "SkeletalMeshSamplingInfo.h"
#include "SkinWeightProfileInfo.h"
#include "SkinnedAsset.h"
#include "Templates/SubclassOf.h"
#include "SkeletalMesh.generated.h"

class UAnimInstance;
class UAssetUserData;
class UBlueprint;
class UBodySetup;
class UClothingAssetBase;
class UMeshDeformer;
class UMorphTarget;
class UNodeMappingContainer;
class UObject;
class UPhysicsAsset;
class USkeletalMeshLODSettings;
class USkeletalMeshSocket;
class USkeleton;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USkeletalMesh : public USkinnedAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData, public INodeMappingProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds ImportedBounds;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds ExtendedBounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositiveBoundsExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NegativeBoundsExtension;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMaterial> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FBoneMirrorInfo> SkelMirrorTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshLODInfo> LODInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerQualityLevelInt MinQualityLevelLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> SkelMirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> SkelMirrorFlipAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFullPrecisionUVs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasBeenSimplified: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasVertexColors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnablePerPolyCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* ShadowPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UNodeMappingContainer*> NodeMappingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportRayTracing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingMinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothLODBiasMode ClothLODBiasMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorphTarget*> MorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PostProcessAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UClothingAssetBase*> MeshClothingAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalMeshSamplingInfo SamplingInfo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshSocket*> Sockets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSkinWeightProfileInfo> SkinWeightProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshDeformer* DefaultMeshDeformer;
    
public:
    USkeletalMesh();

    UFUNCTION(BlueprintCallable)
    void SetSkeleton(USkeleton* InSkeleton);
    
    UFUNCTION(BlueprintCallable)
    void SetMorphTargets(const TArray<UMorphTarget*>& InMorphTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLODForQualityLevels(const TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32 Default);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshClothingAssets(const TArray<UClothingAssetBase*>& InMeshClothingAssets);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterials(const TArray<FSkeletalMaterial>& InMaterials);
    
    UFUNCTION(BlueprintCallable)
    void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAnimatingRig(TSoftObjectPtr<UObject> InAnimatingRig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumSockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> K2_GetAllMorphTargetNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* GetSocketByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeleton* GetSkeleton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsAsset* GetShadowPhysicsAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsAsset* GetPhysicsAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UNodeMappingContainer*> GetNodeMappingData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMorphTarget*> GetMorphTargetsPtrConv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinLODForQualityLevels(TMap<EPerQualityLevels, int32>& QualityLevelMinimumLODs, int32& Default) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UClothingAssetBase*> GetMeshClothingAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSkeletalMaterial> GetMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshLODSettings* GetLODSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetImportedBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UObject> GetDefaultAnimatingRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32& OutIndex) const;
    

    // Fix for true pure virtual functions not being implemented
};


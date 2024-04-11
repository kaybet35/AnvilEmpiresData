#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "Templates/SubclassOf.h"
#include "UnderwaterPostProcessSettings.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterCurveSettings.h"
#include "WaterBodyComponent.generated.h"

class ALandscapeProxy;
class AWaterBody;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class AWaterZone;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNavAreaBase;
class UPhysicalMaterial;
class UStaticMesh;
class UWaterSplineComponent;
class UWaterSplineMetadata;
class UWaterWavesBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWaveMaskDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaveHeightOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterCurveSettings CurveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WaterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WaterHLODMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WaterLODMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UnderwaterPostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WaterInfoMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBodyHeightmapSettings WaterHeightmapSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeDilation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsLandscape;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    int32 WaterBodyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WaterMeshOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysGenerateWaterMeshTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlapMaterialPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWaterSplineMetadata* WaterSplineMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WaterMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WaterLODMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* UnderwaterPostProcessMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WaterInfoMID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AWaterBodyIsland>> WaterBodyIslands;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALandscapeProxy> Landscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWaterZone> OwningWaterZone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWaterZone> WaterZoneOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostProcessSettings CurrentPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> WaterNavAreaClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double FixedWaterDepth;
    
public:
    UWaterBodyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterAndUnderWaterPostProcessMaterial(UMaterialInterface* InWaterMaterial, UMaterialInterface* InUnderWaterPostProcessMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterWavesBase* GetWaterWaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterVelocityAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWaterSurfaceInfoAtLocation(const FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetWaterMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterLODMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWaterBody* GetWaterBodyActor() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimitiveComponent*> GetStandardRenderableComponents() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxWaveHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaterBodyIsland*> GetIslands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents) const;
    
};


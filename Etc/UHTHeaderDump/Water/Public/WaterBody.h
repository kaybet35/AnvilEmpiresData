#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EWaterBodyType.h"
#include "WaterBrushActorInterface.h"
#include "WaterBody.generated.h"

class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterBodyComponent;
class UWaterSplineComponent;
class UWaterSplineMetadata;
class UWaterWavesBase;

UCLASS(Abstract, Blueprintable)
class WATER_API AWaterBody : public AActor, public IWaterBrushActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterSplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterSplineMetadata* WaterSplineMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterBodyComponent* WaterBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    int32 WaterBodyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterBodyType WaterBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterWavesBase* WaterWaves;
    
public:
    AWaterBody(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterWaves(UWaterWavesBase* InWaterWaves);
    
    UFUNCTION(BlueprintCallable)
    void SetWaterMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaterVelocityVectorAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterVelocityAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetWaterMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWaterBodyType GetWaterBodyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterBodyComponent* GetWaterBodyComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaterBodyIsland*> GetIslands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAudioIntensityAtSplineInputKey(float InKey) const;
    

    // Fix for true pure virtual functions not being implemented
};


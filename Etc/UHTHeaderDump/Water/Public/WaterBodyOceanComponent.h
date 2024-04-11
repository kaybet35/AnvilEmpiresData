#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WaterBodyComponent.h"
#include "WaterBodyOceanComponent.generated.h"

class UOceanBoxCollisionComponent;
class UOceanCollisionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyOceanComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UOceanBoxCollisionComponent*> CollisionBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UOceanCollisionComponent*> CollisionHullSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VisualExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
public:
    UWaterBodyOceanComponent(const FObjectInitializer& ObjectInitializer);

};


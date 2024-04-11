#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyRiverComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USplineMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyRiverComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LakeTransitionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LakeTransitionMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OceanTransitionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OceanTransitionMID;
    
public:
    UWaterBodyRiverComponent(const FObjectInitializer& ObjectInitializer);

};


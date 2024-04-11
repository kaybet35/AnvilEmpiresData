#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "OceanGenerator.generated.h"

class UOceanBoxCollisionComponent;
class UOceanCollisionComponent;

UCLASS(Blueprintable, MinimalAPI)
class UDEPRECATED_OceanGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UOceanBoxCollisionComponent*> CollisionBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UOceanCollisionComponent*> CollisionHullSets;
    
    UDEPRECATED_OceanGenerator();

};


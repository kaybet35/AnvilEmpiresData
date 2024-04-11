#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "PlantGrowthDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPlantGrowthDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GrowthStage;
    
    UPlantGrowthDataComponent(const FObjectInitializer& ObjectInitializer);

};


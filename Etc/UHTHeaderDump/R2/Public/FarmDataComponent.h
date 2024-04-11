#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "FarmDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UFarmDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedWaterDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedFertilizeDuration;
    
    UFarmDataComponent(const FObjectInitializer& ObjectInitializer);

};


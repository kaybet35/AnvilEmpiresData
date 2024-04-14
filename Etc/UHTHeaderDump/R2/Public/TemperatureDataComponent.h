#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "TemperatureDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UTemperatureDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentNormalizedTemperature;
    
    UTemperatureDataComponent(const FObjectInitializer& ObjectInitializer);

};


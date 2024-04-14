#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=WeatherData -FallbackName=WeatherData
#include "VisWeatherIndicatorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UVisWeatherIndicatorAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherData Weather;
    
    UVisWeatherIndicatorAnimInstance();

};


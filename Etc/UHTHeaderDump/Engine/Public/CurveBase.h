#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CurveBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UCurveBase : public UObject {
    GENERATED_BODY()
public:
    UCurveBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetValueRange(float& MinValue, float& MaxValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTimeRange(float& MinTime, float& MaxTime) const;
    
};


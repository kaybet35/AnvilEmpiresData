#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "NamedCurveValue.h"
#include "CurveSourceInterface.generated.h"

UINTERFACE(Blueprintable)
class ENGINE_API UCurveSourceInterface : public UInterface {
    GENERATED_BODY()
};

class ENGINE_API ICurveSourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCurveValue(FName CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurves(TArray<FNamedCurveValue>& OutValues) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetBindingName() const;
    
};


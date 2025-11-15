#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HapticFeedbackEffect_Base.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHapticFeedbackEffect_Base : public UObject {
    GENERATED_BODY()
public:
    UHapticFeedbackEffect_Base();

};


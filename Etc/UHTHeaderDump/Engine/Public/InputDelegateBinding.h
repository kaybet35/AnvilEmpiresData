#pragma once
#include "CoreMinimal.h"
#include "DynamicBlueprintBinding.h"
#include "InputDelegateBinding.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UInputDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UInputDelegateBinding();

};


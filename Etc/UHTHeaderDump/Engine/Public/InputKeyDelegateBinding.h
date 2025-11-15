#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputKeyDelegateBinding.h"
#include "InputDelegateBinding.h"
#include "InputKeyDelegateBinding.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UInputKeyDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;
    
    UInputKeyDelegateBinding();

};


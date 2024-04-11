#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputDelegateBinding -FallbackName=InputDelegateBinding
#include "BlueprintInputDebugKeyDelegateBinding.h"
#include "InputDebugKeyDelegateBinding.generated.h"

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UInputDebugKeyDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;
    
    UInputDebugKeyDelegateBinding();

};


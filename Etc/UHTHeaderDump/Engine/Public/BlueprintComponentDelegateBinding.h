#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintComponentDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DelegatePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    FBlueprintComponentDelegateBinding();
};


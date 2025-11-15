#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "CustomInput.generated.h"

USTRUCT(BlueprintType)
struct FCustomInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    ENGINE_API FCustomInput();
};


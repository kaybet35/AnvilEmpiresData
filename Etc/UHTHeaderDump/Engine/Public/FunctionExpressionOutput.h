#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ExpressionOutput.h"
#include "FunctionExpressionOutput.generated.h"

class UMaterialExpressionFunctionOutput;

USTRUCT(BlueprintType)
struct FFunctionExpressionOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialExpressionFunctionOutput* ExpressionOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ExpressionOutputId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionOutput Output;
    
    ENGINE_API FFunctionExpressionOutput();
};


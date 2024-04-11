#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EMathConstantsEnum.h"
#include "MathConstantsDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FMathConstantsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMathConstantsEnum Constant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FMathConstantsDataflowNode();
};


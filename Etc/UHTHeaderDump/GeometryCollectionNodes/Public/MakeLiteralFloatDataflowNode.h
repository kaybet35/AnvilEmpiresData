#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralFloatDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FMakeLiteralFloatDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralFloatDataflowNode();
};


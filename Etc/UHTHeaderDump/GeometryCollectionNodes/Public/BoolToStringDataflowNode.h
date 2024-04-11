#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "BoolToStringDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FBoolToStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FBoolToStringDataflowNode();
};


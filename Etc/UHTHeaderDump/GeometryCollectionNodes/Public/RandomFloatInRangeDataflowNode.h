#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RandomFloatInRangeDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FRandomFloatInRangeDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Deterministic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FRandomFloatInRangeDataflowNode();
};


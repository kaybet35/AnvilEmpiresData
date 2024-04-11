#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DegreesToRadiansDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FDegreesToRadiansDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Degrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radians;
    
    GEOMETRYCOLLECTIONNODES_API FDegreesToRadiansDataflowNode();
};


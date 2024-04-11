#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RadiansToDegreesDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FRadiansToDegreesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Degrees;
    
    GEOMETRYCOLLECTIONNODES_API FRadiansToDegreesDataflowNode();
};


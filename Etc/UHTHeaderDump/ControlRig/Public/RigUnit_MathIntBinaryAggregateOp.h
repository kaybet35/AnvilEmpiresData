#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntBinaryAggregateOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntBinaryAggregateOp : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    FRigUnit_MathIntBinaryAggregateOp();
};


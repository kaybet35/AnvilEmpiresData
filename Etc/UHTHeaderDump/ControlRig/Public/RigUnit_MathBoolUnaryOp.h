#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigUnit_MathBoolUnaryOp();
};


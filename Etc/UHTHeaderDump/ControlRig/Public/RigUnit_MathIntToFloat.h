#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntToFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRigUnit_MathIntToFloat();
};


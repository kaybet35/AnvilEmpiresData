#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateFloatMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateFloatMul : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedValue;
    
    FRigUnit_AccumulateFloatMul();
};


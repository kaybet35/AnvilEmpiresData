#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateFloatAdd.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateFloatAdd : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Increment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedValue;
    
    FRigUnit_AccumulateFloatAdd();
};


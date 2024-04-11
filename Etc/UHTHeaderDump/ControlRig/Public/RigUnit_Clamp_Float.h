#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_Clamp_Float.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Clamp_Float : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRigUnit_Clamp_Float();
};


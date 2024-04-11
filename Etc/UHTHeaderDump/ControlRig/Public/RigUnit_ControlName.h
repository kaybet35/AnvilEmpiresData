#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_ControlName.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ControlName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    FRigUnit_ControlName();
};


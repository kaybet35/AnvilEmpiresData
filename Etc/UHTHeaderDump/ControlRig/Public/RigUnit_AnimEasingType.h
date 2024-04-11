#pragma once
#include "CoreMinimal.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_AnimEasingType.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AnimEasingType : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigAnimEasingType Type;
    
    FRigUnit_AnimEasingType();
};


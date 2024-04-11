#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_GetDeltaTime.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetDeltaTime : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRigUnit_GetDeltaTime();
};


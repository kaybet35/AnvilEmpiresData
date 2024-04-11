#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_AnimAttributeBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigDispatch_AnimAttributeBase : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    FRigDispatch_AnimAttributeBase();
};


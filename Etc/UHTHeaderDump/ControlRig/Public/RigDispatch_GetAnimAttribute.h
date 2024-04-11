#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_AnimAttributeBase.h"
#include "RigDispatch_GetAnimAttribute.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase {
    GENERATED_BODY()
public:
    FRigDispatch_GetAnimAttribute();
};


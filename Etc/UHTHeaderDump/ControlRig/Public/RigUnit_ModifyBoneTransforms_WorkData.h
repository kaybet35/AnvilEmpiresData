#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ModifyTransforms_WorkData.h"
#include "RigUnit_ModifyBoneTransforms_WorkData.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData {
    GENERATED_BODY()
public:
    FRigUnit_ModifyBoneTransforms_WorkData();
};


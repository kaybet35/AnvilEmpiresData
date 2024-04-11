#pragma once
#include "CoreMinimal.h"
#include "EControlRigModifyBoneMode.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ModifyBoneTransforms_PerBone.h"
#include "RigUnit_ModifyBoneTransforms_WorkData.h"
#include "RigUnit_ModifyBoneTransforms.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigModifyBoneMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;
    
    FRigUnit_ModifyBoneTransforms();
};


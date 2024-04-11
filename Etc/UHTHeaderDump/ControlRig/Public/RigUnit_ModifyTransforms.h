#pragma once
#include "CoreMinimal.h"
#include "EControlRigModifyBoneMode.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ModifyTransforms_PerItem.h"
#include "RigUnit_ModifyTransforms_WorkData.h"
#include "RigUnit_ModifyTransforms.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigModifyBoneMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_ModifyTransforms_WorkData WorkData;
    
    FRigUnit_ModifyTransforms();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneGetterSetterMode.h"
#include "RigUnit_MathTransformMutableBase.h"
#include "RigUnit_MathTransformAccumulateArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformAccumulateArray : public FRigUnit_MathTransformMutableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneGetterSetterMode TargetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParentIndices;
    
    FRigUnit_MathTransformAccumulateArray();
};


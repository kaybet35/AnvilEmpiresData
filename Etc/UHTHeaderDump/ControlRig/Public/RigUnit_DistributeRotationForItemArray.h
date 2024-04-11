#pragma once
#include "CoreMinimal.h"
#include "EControlRigAnimEasingType.h"
#include "RigElementKey.h"
#include "RigUnit_DistributeRotation_Rotation.h"
#include "RigUnit_DistributeRotation_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_DistributeRotationForItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_DistributeRotation_WorkData WorkData;
    
    FRigUnit_DistributeRotationForItemArray();
};


#pragma once
#include "CoreMinimal.h"
#include "EControlRigAnimEasingType.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_DistributeRotation_Rotation.h"
#include "RigUnit_DistributeRotation_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_DistributeRotationForCollection.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_DistributeRotation_WorkData WorkData;
    
    FRigUnit_DistributeRotationForCollection();
};


#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_PoseGetItemsItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    FRigUnit_PoseGetItemsItemArray();
};


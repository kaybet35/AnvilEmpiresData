#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_CCDIK_RotationLimitPerItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CCDIK_RotationLimitPerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Limit;
    
    FRigUnit_CCDIK_RotationLimitPerItem();
};


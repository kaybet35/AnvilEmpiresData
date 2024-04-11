#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKey.h"
#include "RigUnit_ModifyTransforms_PerItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ModifyTransforms_PerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    FRigUnit_ModifyTransforms_PerItem();
};


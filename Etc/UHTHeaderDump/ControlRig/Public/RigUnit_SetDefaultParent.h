#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_SetDefaultParent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Parent;
    
    FRigUnit_SetDefaultParent();
};


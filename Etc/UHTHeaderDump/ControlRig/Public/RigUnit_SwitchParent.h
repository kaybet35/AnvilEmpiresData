#pragma once
#include "CoreMinimal.h"
#include "ERigSwitchParentMode.h"
#include "RigElementKey.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_SwitchParent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigSwitchParentMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainGlobal;
    
    FRigUnit_SwitchParent();
};


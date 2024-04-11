#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_HierarchyRemoveElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    FRigUnit_HierarchyRemoveElement();
};


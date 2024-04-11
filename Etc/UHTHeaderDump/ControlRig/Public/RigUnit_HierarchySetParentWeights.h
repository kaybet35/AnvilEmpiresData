#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementWeight.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_HierarchySetParentWeights.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementWeight> Weights;
    
    FRigUnit_HierarchySetParentWeights();
};


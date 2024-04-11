#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementWeight.h"
#include "RigUnit_DynamicHierarchyBase.h"
#include "RigUnit_HierarchyGetParentWeightsArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementWeight> Weights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Parents;
    
    FRigUnit_HierarchyGetParentWeightsArray();
};


#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_PropagateTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PropagateTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecomputeGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecursive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
    FRigUnit_PropagateTransform();
};


#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "ConstraintParent.generated.h"

USTRUCT(BlueprintType)
struct FConstraintParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    CONTROLRIG_API FConstraintParent();
};


#pragma once
#include "CoreMinimal.h"
#include "RigComputedTransform.h"
#include "RigLocalAndGlobalTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigLocalAndGlobalTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigComputedTransform Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigComputedTransform Global;
    
    FRigLocalAndGlobalTransform();
};


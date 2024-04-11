#pragma once
#include "CoreMinimal.h"
#include "RigLocalAndGlobalTransform.h"
#include "RigCurrentAndInitialTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigCurrentAndInitialTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigLocalAndGlobalTransform Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigLocalAndGlobalTransform Initial;
    
    FRigCurrentAndInitialTransform();
};


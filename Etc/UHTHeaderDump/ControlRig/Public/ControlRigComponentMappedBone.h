#pragma once
#include "CoreMinimal.h"
#include "ControlRigComponentMappedBone.generated.h"

USTRUCT(BlueprintType)
struct FControlRigComponentMappedBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Target;
    
    CONTROLRIG_API FControlRigComponentMappedBone();
};


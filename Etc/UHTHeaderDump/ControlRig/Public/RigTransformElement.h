#pragma once
#include "CoreMinimal.h"
#include "RigBaseElement.h"
#include "RigCurrentAndInitialTransform.h"
#include "RigTransformElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigTransformElement : public FRigBaseElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigCurrentAndInitialTransform Pose;
    
    FRigTransformElement();
};


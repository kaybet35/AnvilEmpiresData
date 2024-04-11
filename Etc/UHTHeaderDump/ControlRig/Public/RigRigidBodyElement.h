#pragma once
#include "CoreMinimal.h"
#include "RigRigidBodySettings.h"
#include "RigSingleParentElement.h"
#include "RigRigidBodyElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigRigidBodyElement : public FRigSingleParentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigRigidBodySettings Settings;
    
    FRigRigidBodyElement();
};


#pragma once
#include "CoreMinimal.h"
#include "ConstraintProfileProperties.h"
#include "PhysicsConstraintProfileHandle.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsConstraintProfileHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintProfileProperties ProfileProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    ENGINE_API FPhysicsConstraintProfileHandle();
};


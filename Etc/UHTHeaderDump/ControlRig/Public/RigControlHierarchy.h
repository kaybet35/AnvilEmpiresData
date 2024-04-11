#pragma once
#include "CoreMinimal.h"
#include "RigControl.h"
#include "RigControlHierarchy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigControl> Controls;
    
public:
    FRigControlHierarchy();
};


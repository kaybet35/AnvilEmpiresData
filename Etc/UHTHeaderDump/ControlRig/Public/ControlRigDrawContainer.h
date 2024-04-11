#pragma once
#include "CoreMinimal.h"
#include "ControlRigDrawInstruction.h"
#include "ControlRigDrawContainer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigDrawContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigDrawInstruction> Instructions;
    
    FControlRigDrawContainer();
};


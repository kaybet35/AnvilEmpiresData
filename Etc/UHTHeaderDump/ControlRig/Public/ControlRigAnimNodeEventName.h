#pragma once
#include "CoreMinimal.h"
#include "ControlRigAnimNodeEventName.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigAnimNodeEventName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    FControlRigAnimNodeEventName();
};


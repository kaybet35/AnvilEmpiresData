#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ControlRigSequenceObjectReference.generated.h"

class UControlRig;

USTRUCT(BlueprintType)
struct FControlRigSequenceObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> ControlRigClass;
    
public:
    CONTROLRIG_API FControlRigSequenceObjectReference();
};


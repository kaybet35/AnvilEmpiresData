#pragma once
#include "CoreMinimal.h"
#include "ControlRigSequenceObjectReference.h"
#include "ControlRigSequenceObjectReferences.generated.h"

USTRUCT(BlueprintType)
struct FControlRigSequenceObjectReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigSequenceObjectReference> Array;
    
    CONTROLRIG_API FControlRigSequenceObjectReferences();
};


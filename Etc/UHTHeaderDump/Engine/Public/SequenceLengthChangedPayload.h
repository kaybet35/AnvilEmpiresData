#pragma once
#include "CoreMinimal.h"
#include "EmptyPayload.h"
#include "SequenceLengthChangedPayload.generated.h"

USTRUCT(BlueprintType)
struct FSequenceLengthChangedPayload : public FEmptyPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float T1;
    
    ENGINE_API FSequenceLengthChangedPayload();
};


#pragma once
#include "CoreMinimal.h"
#include "FixedFrameRateCustomTimeStep.h"
#include "GenlockedCustomTimeStep.generated.h"

UCLASS(Abstract, Blueprintable)
class TIMEMANAGEMENT_API UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDetectFormat;
    
    UGenlockedCustomTimeStep();

};


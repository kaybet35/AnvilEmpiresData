#pragma once
#include "CoreMinimal.h"
#include "WaveTableTransform.h"
#include "WaveTableBankEntry.generated.h"

USTRUCT(BlueprintType)
struct WAVETABLE_API FWaveTableBankEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveTableTransform Transform;
    
    FWaveTableBankEntry();
};


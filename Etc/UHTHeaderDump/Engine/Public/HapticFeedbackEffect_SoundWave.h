#pragma once
#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Base.h"
#include "HapticFeedbackEffect_SoundWave.generated.h"

class USoundWave;

UCLASS(Blueprintable, MinimalAPI)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStereo;
    
    UHapticFeedbackEffect_SoundWave();

};


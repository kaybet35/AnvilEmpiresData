#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameter -FallbackName=AudioParameter
#include "AudioComponentParam.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FAudioComponentParam : public FAudioParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWaveParam;
    
    ENGINE_API FAudioComponentParam();
};


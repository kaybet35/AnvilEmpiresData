#pragma once
#include "CoreMinimal.h"
#include "DialogueContext.h"
#include "DialogueContextMapping.generated.h"

class UDialogueSoundWaveProxy;
class USoundWave;

USTRUCT(BlueprintType)
struct ENGINE_API FDialogueContextMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationKeyFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogueSoundWaveProxy* Proxy;
    
    FDialogueContextMapping();
};


#pragma once
#include "CoreMinimal.h"
#include "DialogueContext.h"
#include "DialogueWaveParameter.generated.h"

class UDialogueWave;

USTRUCT(BlueprintType)
struct ENGINE_API FDialogueWaveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueWave* DialogueWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueContext Context;
    
    FDialogueWaveParameter();
};


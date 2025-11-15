#pragma once
#include "CoreMinimal.h"
#include "DialogueContext.generated.h"

class UDialogueVoice;

USTRUCT(BlueprintType)
struct ENGINE_API FDialogueContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueVoice* Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogueVoice*> Targets;
    
    FDialogueContext();
};


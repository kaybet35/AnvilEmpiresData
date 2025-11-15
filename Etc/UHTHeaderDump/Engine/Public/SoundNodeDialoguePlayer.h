#pragma once
#include "CoreMinimal.h"
#include "DialogueWaveParameter.h"
#include "SoundNode.h"
#include "SoundNodeDialoguePlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeDialoguePlayer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueWaveParameter DialogueWaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    USoundNodeDialoguePlayer();

};


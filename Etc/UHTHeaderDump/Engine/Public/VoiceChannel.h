#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "VoiceChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENGINE_API UVoiceChannel : public UChannel {
    GENERATED_BODY()
public:
    UVoiceChannel();

};


#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "DataStreamChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENGINE_API UDataStreamChannel : public UChannel {
    GENERATED_BODY()
public:
    UDataStreamChannel();

};


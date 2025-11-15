#pragma once
#include "CoreMinimal.h"
#include "PlayerMuteList.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMuteList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasVoiceHandshakeCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceChannelIdx;
    
    ENGINE_API FPlayerMuteList();
};


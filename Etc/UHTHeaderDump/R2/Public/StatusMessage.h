#pragma once
#include "CoreMinimal.h"
#include "EAnvilStatusMessageType.h"
#include "StatusMessage.generated.h"

USTRUCT(BlueprintType)
struct FStatusMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilStatusMessageType MessageType;
    
    R2_API FStatusMessage();
};


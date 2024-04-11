#pragma once
#include "CoreMinimal.h"
#include "EClientConnectToServerResponseType.h"
#include "ConnectToServerResponse.generated.h"

USTRUCT(BlueprintType)
struct FConnectToServerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientConnectToServerResponseType ResponseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectedFactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectTokenBase64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerAddressToJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueuePosition;
    
    ANVIL_API FConnectToServerResponse();
};


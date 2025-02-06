#pragma once
#include "CoreMinimal.h"
#include "JsonSafeUint64.h"
#include "ClientConnectionRequest.generated.h"

USTRUCT(BlueprintType)
struct FClientConnectionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonSafeUint64 OnlineId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ProtocolId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectedFactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 QueueTypeToJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MajorVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinorVersion;
    
    ANVIL_API FClientConnectionRequest();
};


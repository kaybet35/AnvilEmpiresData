#pragma once
#include "CoreMinimal.h"
#include "JsonSafeUint64.h"
#include "GetBatchedDataForClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetBatchedDataForClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RequestTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonSafeUint64 OnlineId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ClientWorldEntityPoolVersionVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ClientWinConditionStateVersion;
    
    ANVIL_API FGetBatchedDataForClientRequest();
};


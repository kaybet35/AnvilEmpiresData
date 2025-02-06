#pragma once
#include "CoreMinimal.h"
#include "JsonSafeUint64.h"
#include "MapPostEntry.generated.h"

USTRUCT(BlueprintType)
struct FMapPostEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonSafeUint64 PosterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnixTimestamp;
    
    ANVIL_API FMapPostEntry();
};


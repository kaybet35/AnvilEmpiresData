#pragma once
#include "CoreMinimal.h"
#include "ServerListEntry.generated.h"

USTRUCT(BlueprintType)
struct FServerListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> FactionCapacityArray;
    
    ANVIL_API FServerListEntry();
};


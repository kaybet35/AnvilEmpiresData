#pragma once
#include "CoreMinimal.h"
#include "ServerListEntry.h"
#include "ServerListResponse.generated.h"

USTRUCT(BlueprintType)
struct FServerListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FServerListEntry> ServerList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DeploymentListVersion;
    
    ANVIL_API FServerListResponse();
};


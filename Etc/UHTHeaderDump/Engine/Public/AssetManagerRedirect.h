#pragma once
#include "CoreMinimal.h"
#include "AssetManagerRedirect.generated.h"

USTRUCT(BlueprintType)
struct FAssetManagerRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString New;
    
    ENGINE_API FAssetManagerRedirect();
};


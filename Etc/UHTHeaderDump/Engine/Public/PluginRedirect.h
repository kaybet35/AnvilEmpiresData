#pragma once
#include "CoreMinimal.h"
#include "PluginRedirect.generated.h"

USTRUCT(BlueprintType)
struct FPluginRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPluginName;
    
    ENGINE_API FPluginRedirect();
};


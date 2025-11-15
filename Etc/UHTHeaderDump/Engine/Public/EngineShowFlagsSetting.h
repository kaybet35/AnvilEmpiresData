#pragma once
#include "CoreMinimal.h"
#include "EngineShowFlagsSetting.generated.h"

USTRUCT(BlueprintType)
struct FEngineShowFlagsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShowFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    ENGINE_API FEngineShowFlagsSetting();
};


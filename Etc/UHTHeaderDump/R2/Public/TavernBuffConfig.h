#pragma once
#include "CoreMinimal.h"
#include "TavernBuffConfig.generated.h"

USTRUCT(BlueprintType)
struct FTavernBuffConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    R2_API FTavernBuffConfig();
};


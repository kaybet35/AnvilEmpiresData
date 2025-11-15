#pragma once
#include "CoreMinimal.h"
#include "SlateModifierKeysState.generated.h"

USTRUCT(BlueprintType)
struct FSlateModifierKeysState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ModifierKeysStateMask;
    
    ENGINE_API FSlateModifierKeysState();
};


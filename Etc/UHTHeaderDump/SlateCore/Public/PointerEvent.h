#pragma once
#include "CoreMinimal.h"
#include "InputEvent.h"
#include "PointerEvent.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FPointerEvent : public FInputEvent {
    GENERATED_BODY()
public:
    FPointerEvent();
};


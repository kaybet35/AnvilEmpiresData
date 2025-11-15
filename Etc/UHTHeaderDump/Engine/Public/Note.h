#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "Note.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ANote : public AActor {
    GENERATED_BODY()
public:
    ANote(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LevelInstanceEditorInstanceActor.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ENGINE_API ALevelInstanceEditorInstanceActor : public AActor {
    GENERATED_BODY()
public:
    ALevelInstanceEditorInstanceActor(const FObjectInitializer& ObjectInitializer);

};


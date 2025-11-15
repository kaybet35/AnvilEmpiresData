#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LevelInstanceEditorPivotInterface.h"
#include "LevelInstancePivot.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ENGINE_API ALevelInstancePivot : public AActor, public ILevelInstanceEditorPivotInterface {
    GENERATED_BODY()
public:
    ALevelInstancePivot(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


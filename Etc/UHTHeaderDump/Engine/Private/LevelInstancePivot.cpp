#include "LevelInstancePivot.h"
#include "SceneComponent.h"

ALevelInstancePivot::ALevelInstancePivot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}



#include "LevelBounds.h"
#include "BoxComponent.h"

ALevelBounds::ALevelBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->bAutoUpdateBounds = true;
}



#include "WindDirectionalSource.h"
#include "WindDirectionalSourceComponent.h"

AWindDirectionalSource::AWindDirectionalSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWindDirectionalSourceComponent>(TEXT("WindDirectionalSourceComponent0"));
    this->Component = (UWindDirectionalSourceComponent*)RootComponent;
}



#include "VisScaffoldingComponent.h"

UVisScaffoldingComponent::UVisScaffoldingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
}



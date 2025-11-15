#include "PlanarReflection.h"
#include "PlanarReflectionComponent.h"

APlanarReflection::APlanarReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPlanarReflectionComponent>(TEXT("NewPlanarReflectionComponent"))) {
    this->PlanarReflectionComponent = (UPlanarReflectionComponent*)RootComponent;
    this->bShowPreviewPlane = true;
}

void APlanarReflection::OnInterpToggle(bool bEnable) {
}



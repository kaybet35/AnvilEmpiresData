#include "LightmassPortal.h"
#include "LightmassPortalComponent.h"

ALightmassPortal::ALightmassPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULightmassPortalComponent>(TEXT("PortalComponent"));
    this->PortalComponent = (ULightmassPortalComponent*)RootComponent;
}



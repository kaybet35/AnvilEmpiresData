#include "PlatformEventsComponent.h"

UPlatformEventsComponent::UPlatformEventsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UPlatformEventsComponent::SupportsConvertibleLaptops() {
    return false;
}

bool UPlatformEventsComponent::IsInTabletMode() {
    return false;
}

bool UPlatformEventsComponent::IsInLaptopMode() {
    return false;
}



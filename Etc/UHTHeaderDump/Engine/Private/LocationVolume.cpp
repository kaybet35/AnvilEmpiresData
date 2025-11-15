#include "LocationVolume.h"

ALocationVolume::ALocationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRuntime = false;
}

void ALocationVolume::Unload() {
}

void ALocationVolume::Load() {
}

bool ALocationVolume::IsLoaded() const {
    return false;
}



#include "LODSyncComponent.h"

ULODSyncComponent::ULODSyncComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumLODs = -1;
    this->ForcedLOD = -1;
    this->MinLOD = 0;
    this->CurrentLOD = 0;
    this->CurrentNumLODs = 0;
}

FString ULODSyncComponent::GetLODSyncDebugText() const {
    return TEXT("");
}



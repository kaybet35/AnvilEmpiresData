#include "MeshInstancingSettings.h"

FMeshInstancingSettings::FMeshInstancingSettings() {
    this->ActorClassToUse = NULL;
    this->InstanceReplacementThreshold = 0;
    this->bSkipMeshesWithVertexColors = false;
    this->bUseHLODVolumes = false;
    this->ISMComponentToUse = NULL;
}


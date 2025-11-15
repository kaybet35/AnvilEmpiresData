#include "InstancedStaticMeshComponentInstanceData.h"

FInstancedStaticMeshComponentInstanceData::FInstancedStaticMeshComponentInstanceData() {
    this->StaticMesh = NULL;
    this->InstancingRandomSeed = 0;
    this->bHasPerInstanceHitProxies = false;
}


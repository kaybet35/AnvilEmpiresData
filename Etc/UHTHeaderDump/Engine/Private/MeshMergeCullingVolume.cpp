#include "MeshMergeCullingVolume.h"

AMeshMergeCullingVolume::AMeshMergeCullingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bNotForClientOrServer = true;
}



#include "WorldPartitionHLOD.h"

AWorldPartitionHLOD::AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LODLevel = 0;
    this->bRequireWarmup = false;
}



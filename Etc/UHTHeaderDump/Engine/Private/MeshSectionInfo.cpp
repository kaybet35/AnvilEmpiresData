#include "MeshSectionInfo.h"

FMeshSectionInfo::FMeshSectionInfo() {
    this->MaterialIndex = 0;
    this->bEnableCollision = false;
    this->bCastShadow = false;
    this->bVisibleInRayTracing = false;
    this->bAffectDistanceFieldLighting = false;
    this->bForceOpaque = false;
}


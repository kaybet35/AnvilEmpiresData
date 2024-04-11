#include "AnimNode_RetargetPoseFromMesh.h"

FAnimNode_RetargetPoseFromMesh::FAnimNode_RetargetPoseFromMesh() {
    this->bUseAttachedParent = false;
    this->IKRetargeterAsset = NULL;
    this->bSuppressWarnings = false;
    this->bCopyCurves = false;
    this->Processor = NULL;
}


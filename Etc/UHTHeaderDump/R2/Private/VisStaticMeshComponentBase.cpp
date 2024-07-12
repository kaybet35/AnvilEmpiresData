#include "VisStaticMeshComponentBase.h"

UVisStaticMeshComponentBase::UVisStaticMeshComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->bUseCustomGeneratedCollisionMask = false;
    this->CustomGeneratedCollisionMask = 0;
    this->VisMeshProfile = EVisMeshProfile::Undefined;
    this->bMeshVisibility = false;
}



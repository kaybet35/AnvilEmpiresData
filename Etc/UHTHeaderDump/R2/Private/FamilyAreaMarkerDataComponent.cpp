#include "FamilyAreaMarkerDataComponent.h"

UFamilyAreaMarkerDataComponent::UFamilyAreaMarkerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyId = 0;
    this->AllowPublicPledging = false;
    this->VisVarMaxNumFamilyMembers = 0;
    this->VisVarRestrictedBoxExtent = 0.00f;
}


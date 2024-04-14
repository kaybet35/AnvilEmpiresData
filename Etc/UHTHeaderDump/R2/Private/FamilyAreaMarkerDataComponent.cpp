#include "FamilyAreaMarkerDataComponent.h"

UFamilyAreaMarkerDataComponent::UFamilyAreaMarkerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowPublicPledging = false;
    this->bHasMembers = false;
    this->NumFamilyOwnedStructures = 0;
}



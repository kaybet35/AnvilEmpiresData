#include "FamilyCenterDataComponent.h"

UFamilyCenterDataComponent::UFamilyCenterDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyAreaRadius = 0.00f;
    this->AllowPublicPledging = false;
    this->bHasMembers = false;
}



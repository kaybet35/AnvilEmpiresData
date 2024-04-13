#include "FamilyAreaMarkerDataComponent.h"

UFamilyAreaMarkerDataComponent::UFamilyAreaMarkerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyId = 0;
    this->AllowPublicPledging = false;
    this->Tier = 0;
    this->ExtensionTier = 0;
    this->ClaimTownCurrencyCost = 0;
    this->VisVarMaxNumFamilyMembers = 0;
    this->VisVarRestrictedBoxExtent = 0.00f;
    this->ParentFamilyArea = 0;
    this->IsFamilyAreaCore = 0;
    this->NumChildAreas = 0;
}



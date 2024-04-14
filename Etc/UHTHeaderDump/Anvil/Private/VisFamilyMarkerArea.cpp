#include "VisFamilyMarkerArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=FamilyAreaMarkerDataComponent -FallbackName=FamilyAreaMarkerDataComponent

AVisFamilyMarkerArea::AVisFamilyMarkerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FamilyAreaMarkerDataComponent = CreateDefaultSubobject<UFamilyAreaMarkerDataComponent>(TEXT("FamilyAreaMarkerDataComponent"));
}



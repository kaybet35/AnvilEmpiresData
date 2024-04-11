#include "VisRichSoil.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=RichSoilDataComponent -FallbackName=RichSoilDataComponent

AVisRichSoil::AVisRichSoil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->RichSoilDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("RichSoilDecal"));
    this->RichSoilDataComponent = CreateDefaultSubobject<URichSoilDataComponent>(TEXT("RichSoilDataComponent"));
    this->RichSoilDecal->SetupAttachment(RootComponent);
}



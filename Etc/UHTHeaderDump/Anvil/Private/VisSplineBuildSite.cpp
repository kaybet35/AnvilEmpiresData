#include "VisSplineBuildSite.h"
#include "VisSplineComponent.h"

AVisSplineBuildSite::AVisSplineBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<UVisSplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
}



#include "VisSpline.h"
#include "VisSplineComponent.h"

AVisSpline::AVisSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<UVisSplineComponent>(TEXT("SplineComponent"));
    this->SplineScaffoldingComponent = CreateDefaultSubobject<UVisSplineComponent>(TEXT("SplineScaffoldingComponent"));
    this->SplineScaffoldingComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}



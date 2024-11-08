#include "VisSpline.h"
#include "VisSplineComponent.h"

AVisSpline::AVisSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<UVisSplineComponent>(TEXT("SplineComponent"));
    this->SplineScaffoldingComponent = CreateDefaultSubobject<UVisSplineComponent>(TEXT("SplineScaffoldingComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
    this->SplineScaffoldingComponent->SetupAttachment(RootComponent);
}



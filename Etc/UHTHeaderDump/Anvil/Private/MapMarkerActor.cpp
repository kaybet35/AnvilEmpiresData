#include "MapMarkerActor.h"
#include "MapMarkerComponent.h"

AMapMarkerActor::AMapMarkerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Marker = CreateDefaultSubobject<UMapMarkerComponent>(TEXT("MapMarker"));
}



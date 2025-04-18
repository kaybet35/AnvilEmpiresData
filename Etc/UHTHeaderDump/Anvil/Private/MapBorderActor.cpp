#include "MapBorderActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AMapBorderActor::AMapBorderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bContinueFromGivenChunk = false;
    this->bCaptureWholeGrid = false;
    this->bCapture = false;
    this->BoxVisualizer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxVisualizer"));
    this->BoxVisualizer->SetupAttachment(RootComponent);
}



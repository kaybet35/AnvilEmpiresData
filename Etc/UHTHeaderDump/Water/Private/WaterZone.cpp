#include "WaterZone.h"
#include "WaterMeshComponent.h"

AWaterZone::AWaterZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWaterMeshComponent>(TEXT("WaterMesh"));
    this->WaterInfoTexture = NULL;
    this->WaterMesh = (UWaterMeshComponent*)RootComponent;
    this->CaptureZOffset = 64.00f;
    this->bHalfPrecisionTexture = true;
    this->VelocityBlurRadius = 1;
    this->NonTessellatedLODSectionScale = 4;
    this->OverlapPriority = 0;
    this->bEnableNonTessellatedLODMesh = false;
}



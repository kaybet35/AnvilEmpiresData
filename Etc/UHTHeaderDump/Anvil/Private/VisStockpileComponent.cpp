#include "VisStockpileComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CollisionVisualizerComponent -FallbackName=CollisionVisualizerComponent

UVisStockpileComponent::UVisStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->BoxVisualizer = CreateDefaultSubobject<UCollisionVisualizerComponent>(TEXT("BoxVisualizer"));
    this->CurrentItem = NULL;
}



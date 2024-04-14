#include "VisMultiItemStockpileComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CollisionVisualizerComponent -FallbackName=CollisionVisualizerComponent

UVisMultiItemStockpileComponent::UVisMultiItemStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxVisualizer = CreateDefaultSubobject<UCollisionVisualizerComponent>(TEXT("BoxVisualizer"));
}



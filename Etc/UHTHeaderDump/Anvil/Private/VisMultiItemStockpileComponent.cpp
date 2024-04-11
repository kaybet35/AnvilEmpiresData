#include "VisMultiItemStockpileComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CollisionVisualizerComponent -FallbackName=CollisionVisualizerComponent

UVisMultiItemStockpileComponent::UVisMultiItemStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TestItem = NULL;
    this->LevelHeight = 0.00f;
    this->bDefaultRotate = true;
    this->BoxVisualizer = CreateDefaultSubobject<UCollisionVisualizerComponent>(TEXT("BoxVisualizer"));
}



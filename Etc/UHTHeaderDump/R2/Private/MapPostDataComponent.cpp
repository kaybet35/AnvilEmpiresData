#include "MapPostDataComponent.h"

UMapPostDataComponent::UMapPostDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostType = EAnvilMapPostType::DefendLocation;
    this->BuilderId = 0;
}



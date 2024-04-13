#include "AnimalAIDataComponent.h"

UAnimalAIDataComponent::UAnimalAIDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EAnvilAnimalState::Idle;
    this->AttachedTarget = 0;
}



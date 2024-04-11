#include "AnimalLivestockProxyComponent.h"

UAnimalLivestockProxyComponent::UAnimalLivestockProxyComponent() {
    this->MaxDistanceToHomeLivestockStructure = 500.00f;
    this->FoodItem = NULL;
    this->ProducedItem = NULL;
    this->FeedingTimeOfDayHour = 12;
    this->bFeedsAtNight = true;
    this->NormalizedChanceToProduceWithoutFood = 0.20f;
    this->TimeToBecomeWildSec = 10.00f;
    this->WildEntity = NULL;
}



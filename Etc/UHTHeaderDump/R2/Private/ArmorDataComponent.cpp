#include "ArmorDataComponent.h"

UArmorDataComponent::UArmorDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeadArmourType = EAnvilArmourType::None;
    this->BodyArmourType = EAnvilArmourType::None;
}



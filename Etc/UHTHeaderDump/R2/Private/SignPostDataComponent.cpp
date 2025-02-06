#include "SignPostDataComponent.h"

USignPostDataComponent::USignPostDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisualType = EAnvilSignPostVisualType::Directional;
    this->ClientVote = EAnvilVoteType::None;
}



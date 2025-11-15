#include "PhysicalAnimationComponent.h"

UPhysicalAnimationComponent::UPhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StrengthMultiplyer = 1.00f;
    this->SkeletalMeshComponent = NULL;
}

void UPhysicalAnimationComponent::SetStrengthMultiplyer(float InStrengthMultiplyer) {
}

void UPhysicalAnimationComponent::SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent) {
}

FTransform UPhysicalAnimationComponent::GetBodyTargetTransform(FName BodyName) const {
    return FTransform{};
}

void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf) {
}

void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData) {
}

void UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound) {
}



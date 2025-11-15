#include "AnimSingleNodeInstance.h"

UAnimSingleNodeInstance::UAnimSingleNodeInstance() {
    this->CurrentAsset = NULL;
}

void UAnimSingleNodeInstance::StopAnim() {
}

void UAnimSingleNodeInstance::SetReverse(bool bInReverse) {
}

void UAnimSingleNodeInstance::SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero) {
}

void UAnimSingleNodeInstance::SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies) {
}

void UAnimSingleNodeInstance::SetPosition(float InPosition, bool bFireNotifies) {
}

void UAnimSingleNodeInstance::SetPlayRate(float InPlayRate) {
}

void UAnimSingleNodeInstance::SetPlaying(bool bIsPlaying) {
}

void UAnimSingleNodeInstance::SetMirrorDataTable(const UMirrorDataTable* MirrorDataTable) {
}

void UAnimSingleNodeInstance::SetLooping(bool bIsLooping) {
}

void UAnimSingleNodeInstance::SetBlendSpacePosition(const FVector& InPosition) {
}

void UAnimSingleNodeInstance::SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate) {
}

void UAnimSingleNodeInstance::PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition) {
}

UMirrorDataTable* UAnimSingleNodeInstance::GetMirrorDataTable() {
    return NULL;
}

float UAnimSingleNodeInstance::GetLength() {
    return 0.0f;
}

UAnimationAsset* UAnimSingleNodeInstance::GetAnimationAsset() const {
    return NULL;
}



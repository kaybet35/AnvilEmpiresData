#include "GeometryCacheComponent.h"

UGeometryCacheComponent::UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeometryCache = NULL;
    this->bRunning = true;
    this->bLooping = true;
    this->bExtrapolateFrames = true;
    this->StartTimeOffset = 0.00f;
    this->PlaybackSpeed = 1.00f;
    this->MotionVectorScale = 1.00f;
    this->NumTracks = 0;
    this->ElapsedTime = 0.00f;
    this->Duration = 0.00f;
    this->bManualTick = false;
    this->bOverrideWireframeColor = false;
}

void UGeometryCacheComponent::TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) {
}

void UGeometryCacheComponent::Stop() {
}

void UGeometryCacheComponent::SetWireframeOverrideColor(const FLinearColor Color) {
}

void UGeometryCacheComponent::SetStartTimeOffset(const float NewStartTimeOffset) {
}

void UGeometryCacheComponent::SetPlaybackSpeed(const float NewPlaybackSpeed) {
}

void UGeometryCacheComponent::SetOverrideWireframeColor(bool bOverride) {
}

void UGeometryCacheComponent::SetMotionVectorScale(const float NewMotionVectorScale) {
}

void UGeometryCacheComponent::SetLooping(const bool bNewLooping) {
}

bool UGeometryCacheComponent::SetGeometryCache(UGeometryCache* NewGeomCache) {
    return false;
}

void UGeometryCacheComponent::SetExtrapolateFrames(const bool bNewExtrapolating) {
}

void UGeometryCacheComponent::PlayReversedFromEnd() {
}

void UGeometryCacheComponent::PlayReversed() {
}

void UGeometryCacheComponent::PlayFromStart() {
}

void UGeometryCacheComponent::Play() {
}

void UGeometryCacheComponent::Pause() {
}

bool UGeometryCacheComponent::IsPlayingReversed() const {
    return false;
}

bool UGeometryCacheComponent::IsPlaying() const {
    return false;
}

bool UGeometryCacheComponent::IsLooping() const {
    return false;
}

bool UGeometryCacheComponent::IsExtrapolatingFrames() const {
    return false;
}

FLinearColor UGeometryCacheComponent::GetWireframeOverrideColor() const {
    return FLinearColor{};
}

float UGeometryCacheComponent::GetStartTimeOffset() const {
    return 0.0f;
}

float UGeometryCacheComponent::GetPlaybackSpeed() const {
    return 0.0f;
}

float UGeometryCacheComponent::GetPlaybackDirection() const {
    return 0.0f;
}

bool UGeometryCacheComponent::GetOverrideWireframeColor() const {
    return false;
}

int32 UGeometryCacheComponent::GetNumberOfFrames() const {
    return 0;
}

float UGeometryCacheComponent::GetMotionVectorScale() const {
    return 0.0f;
}

float UGeometryCacheComponent::GetDuration() const {
    return 0.0f;
}

float UGeometryCacheComponent::GetAnimationTime() const {
    return 0.0f;
}



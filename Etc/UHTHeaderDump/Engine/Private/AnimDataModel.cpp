#include "AnimDataModel.h"

UAnimDataModel::UAnimDataModel() {
    this->BracketCounter = 0;
    this->PlayLength = 0.00f;
    this->NumberOfFrames = 0;
    this->NumberOfKeys = 0;
}

bool UAnimDataModel::IsValidBoneTrackIndex(int32 TrackIndex) const {
    return false;
}

float UAnimDataModel::GetPlayLength() const {
    return 0.0f;
}

int32 UAnimDataModel::GetNumBoneTracks() const {
    return 0;
}

int32 UAnimDataModel::GetNumberOfTransformCurves() const {
    return 0;
}

int32 UAnimDataModel::GetNumberOfKeys() const {
    return 0;
}

int32 UAnimDataModel::GetNumberOfFrames() const {
    return 0;
}

int32 UAnimDataModel::GetNumberOfFloatCurves() const {
    return 0;
}

FFrameRate UAnimDataModel::GetFrameRate() const {
    return FFrameRate{};
}

void UAnimDataModel::GetBoneTrackNames(TArray<FName>& OutNames) const {
}

int32 UAnimDataModel::GetBoneTrackIndexByName(FName TrackName) const {
    return 0;
}

int32 UAnimDataModel::GetBoneTrackIndex(const FBoneAnimationTrack& Track) const {
    return 0;
}

FBoneAnimationTrack UAnimDataModel::GetBoneTrackByName(FName TrackName) const {
    return FBoneAnimationTrack{};
}

FBoneAnimationTrack UAnimDataModel::GetBoneTrackByIndex(int32 TrackIndex) const {
    return FBoneAnimationTrack{};
}

TArray<FBoneAnimationTrack> UAnimDataModel::GetBoneAnimationTracks() const {
    return TArray<FBoneAnimationTrack>();
}

UAnimSequence* UAnimDataModel::GetAnimationSequence() const {
    return NULL;
}



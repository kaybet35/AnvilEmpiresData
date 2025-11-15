#include "LevelStreaming.h"

ULevelStreaming::ULevelStreaming() {
    this->StreamingPriority = 0;
    this->bClientOnlyVisible = false;
    this->LevelLODIndex = -1;
    this->bShouldBeVisible = false;
    this->bShouldBeLoaded = false;
    this->bLocked = false;
    this->bIsStatic = false;
    this->bShouldBlockOnLoad = false;
    this->bShouldBlockOnUnload = false;
    this->bDisableDistanceStreaming = false;
    this->bDrawOnLevelStatusMap = true;
    this->MinTimeBetweenVolumeUnloadRequests = 2.00f;
    this->LoadedLevel = NULL;
    this->PendingUnloadLevel = NULL;
}

bool ULevelStreaming::ShouldBeLoaded() const {
    return false;
}

void ULevelStreaming::SetShouldBeVisible(bool bInShouldBeVisible) {
}

void ULevelStreaming::SetShouldBeLoaded(bool bInShouldBeLoaded) {
}

void ULevelStreaming::SetPriority(int32 NewPriority) {
}

void ULevelStreaming::SetLevelLODIndex(int32 LODIndex) {
}

void ULevelStreaming::SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval) {
}

bool ULevelStreaming::IsStreamingStatePending() const {
    return false;
}

bool ULevelStreaming::IsLevelVisible() const {
    return false;
}

bool ULevelStreaming::IsLevelLoaded() const {
    return false;
}

FName ULevelStreaming::GetWorldAssetPackageFName() const {
    return NAME_None;
}

ULevel* ULevelStreaming::GetLoadedLevel() const {
    return NULL;
}

ALevelScriptActor* ULevelStreaming::GetLevelScriptActor() {
    return NULL;
}

bool ULevelStreaming::GetIsRequestingUnloadAndRemoval() const {
    return false;
}

ULevelStreaming* ULevelStreaming::CreateInstance(const FString& UniqueInstanceName) {
    return NULL;
}



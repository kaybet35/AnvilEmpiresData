#include "AnvilGameInstance.h"

UAnvilGameInstance::UAnvilGameInstance() {
    this->MapWidget = NULL;
    this->HUDWidget = NULL;
    this->WorldEntityPoolManager = NULL;
    this->CharacterSave = NULL;
    this->AnvilClientVoiceClient = NULL;
    this->UIGlobalsClass = NULL;
}

void UAnvilGameInstance::GetVisActors(TArray<AVisActor*>& OutVisActorList) {
}

void UAnvilGameInstance::GetVersion(int32& OutMajor, int32& OutMinor, int32& OutPatch, int32& OutCL) const {
}

void UAnvilGameInstance::GetTimeOfDay(int32& OutHours, int32& OutMinutes, int32& OutSeconds) const {
}

float UAnvilGameInstance::GetNightTimeNormalized() const {
    return 0.0f;
}

bool UAnvilGameInstance::GetIsNight() const {
    return false;
}

void UAnvilGameInstance::GetDayCurrentSeconds(int32& OutSeconds) const {
}

void UAnvilGameInstance::DumpProperties(const FString& OutputFileName, const UClass* Type, const TArray<FString>& PropertyNameFilter) {
}



#include "DataLayerSubsystem.h"

UDataLayerSubsystem::UDataLayerSubsystem() {
}

void UDataLayerSubsystem::SetDataLayerStateByLabel(const FName& InDataLayerLabel, EDataLayerState InState) {
}

void UDataLayerSubsystem::SetDataLayerState(const FActorDataLayer& InDataLayer, EDataLayerState InState) {
}

void UDataLayerSubsystem::SetDataLayerRuntimeStateByLabel(const FName& InDataLayerLabel, EDataLayerRuntimeState InState, bool bInIsRecursive) {
}

void UDataLayerSubsystem::SetDataLayerRuntimeState(const FActorDataLayer& InDataLayer, EDataLayerRuntimeState InState, bool bInIsRecursive) {
}

void UDataLayerSubsystem::SetDataLayerInstanceRuntimeState(const UDataLayerAsset* InDataLayerAsset, EDataLayerRuntimeState InState, bool bInIsRecursive) {
}

TSet<FName> UDataLayerSubsystem::GetLoadedDataLayerNames() const {
    return TSet<FName>();
}

EDataLayerState UDataLayerSubsystem::GetDataLayerStateByLabel(const FName& InDataLayerLabel) const {
    return EDataLayerState::Unloaded;
}

EDataLayerState UDataLayerSubsystem::GetDataLayerState(const FActorDataLayer& InDataLayer) const {
    return EDataLayerState::Unloaded;
}

EDataLayerRuntimeState UDataLayerSubsystem::GetDataLayerRuntimeStateByLabel(const FName& InDataLayerLabel) const {
    return EDataLayerRuntimeState::Unloaded;
}

EDataLayerRuntimeState UDataLayerSubsystem::GetDataLayerRuntimeState(const FActorDataLayer& InDataLayer) const {
    return EDataLayerRuntimeState::Unloaded;
}

EDataLayerRuntimeState UDataLayerSubsystem::GetDataLayerInstanceRuntimeState(const UDataLayerAsset* InDataLayerAsset) const {
    return EDataLayerRuntimeState::Unloaded;
}

UDataLayerInstance* UDataLayerSubsystem::GetDataLayerInstanceFromAsset(const UDataLayerAsset* InDataLayerAsset) const {
    return NULL;
}

EDataLayerRuntimeState UDataLayerSubsystem::GetDataLayerInstanceEffectiveRuntimeState(const UDataLayerAsset* InDataLayerAsset) const {
    return EDataLayerRuntimeState::Unloaded;
}

UDataLayerInstance* UDataLayerSubsystem::GetDataLayerFromName(FName InDataLayerName) const {
    return NULL;
}

UDataLayerInstance* UDataLayerSubsystem::GetDataLayerFromLabel(FName InDataLayerLabel) const {
    return NULL;
}

EDataLayerRuntimeState UDataLayerSubsystem::GetDataLayerEffectiveRuntimeStateByLabel(const FName& InDataLayerLabel) const {
    return EDataLayerRuntimeState::Unloaded;
}

EDataLayerRuntimeState UDataLayerSubsystem::GetDataLayerEffectiveRuntimeState(const FActorDataLayer& InDataLayer) const {
    return EDataLayerRuntimeState::Unloaded;
}

UDataLayerInstance* UDataLayerSubsystem::GetDataLayer(const FActorDataLayer& InDataLayer) const {
    return NULL;
}

TSet<FName> UDataLayerSubsystem::GetActiveDataLayerNames() const {
    return TSet<FName>();
}



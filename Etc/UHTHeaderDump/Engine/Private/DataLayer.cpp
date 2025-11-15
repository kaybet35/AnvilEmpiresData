#include "DataLayer.h"

UDEPRECATED_DataLayer::UDEPRECATED_DataLayer() {
    this->DataLayerLabel = TEXT("Default__DataLayer");
    this->bIsRuntime = false;
    this->InitialRuntimeState = EDataLayerRuntimeState::Unloaded;
    this->Parent = NULL;
}

bool UDEPRECATED_DataLayer::IsVisible() const {
    return false;
}

bool UDEPRECATED_DataLayer::IsRuntime() const {
    return false;
}

bool UDEPRECATED_DataLayer::IsInitiallyVisible() const {
    return false;
}

bool UDEPRECATED_DataLayer::IsInitiallyActive() const {
    return false;
}

bool UDEPRECATED_DataLayer::IsEffectiveVisible() const {
    return false;
}

bool UDEPRECATED_DataLayer::IsDynamicallyLoaded() const {
    return false;
}

EDataLayerState UDEPRECATED_DataLayer::GetInitialState() const {
    return EDataLayerState::Unloaded;
}

EDataLayerRuntimeState UDEPRECATED_DataLayer::GetInitialRuntimeState() const {
    return EDataLayerRuntimeState::Unloaded;
}

FColor UDEPRECATED_DataLayer::GetDebugColor() const {
    return FColor{};
}

FName UDEPRECATED_DataLayer::GetDataLayerLabel() const {
    return NAME_None;
}

bool UDEPRECATED_DataLayer::Equals(const FActorDataLayer& ActorDataLayer) const {
    return false;
}



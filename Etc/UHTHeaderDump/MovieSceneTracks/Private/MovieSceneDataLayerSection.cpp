#include "MovieSceneDataLayerSection.h"

UMovieSceneDataLayerSection::UMovieSceneDataLayerSection() {
    this->DesiredState = EDataLayerRuntimeState::Activated;
    this->PrerollState = EDataLayerRuntimeState::Activated;
    this->bFlushOnUnload = false;
}

void UMovieSceneDataLayerSection::SetPrerollState(EDataLayerRuntimeState InPrerollState) {
}

void UMovieSceneDataLayerSection::SetFlushOnUnload(bool NewBFlushOnUnload) {
}

void UMovieSceneDataLayerSection::SetDesiredState(EDataLayerRuntimeState InDesiredState) {
}

void UMovieSceneDataLayerSection::SetDataLayers(const TArray<FActorDataLayer>& InDataLayers) {
}

void UMovieSceneDataLayerSection::SetDataLayerAssets(const TArray<UDataLayerAsset*>& InDataLayerAssets) {
}

EDataLayerRuntimeState UMovieSceneDataLayerSection::GetPrerollState() const {
    return EDataLayerRuntimeState::Unloaded;
}

bool UMovieSceneDataLayerSection::GetFlushOnUnload() const {
    return false;
}

EDataLayerRuntimeState UMovieSceneDataLayerSection::GetDesiredState() const {
    return EDataLayerRuntimeState::Unloaded;
}

TArray<FActorDataLayer> UMovieSceneDataLayerSection::GetDataLayers() const {
    return TArray<FActorDataLayer>();
}

TArray<UDataLayerAsset*> UMovieSceneDataLayerSection::GetDataLayerAssets() const {
    return TArray<UDataLayerAsset*>();
}



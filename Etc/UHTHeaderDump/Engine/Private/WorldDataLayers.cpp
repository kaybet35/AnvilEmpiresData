#include "WorldDataLayers.h"
#include "Net/UnrealNetwork.h"

AWorldDataLayers::AWorldDataLayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplayRewindable = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AWorldDataLayers::OnRep_LoadedDataLayerNames() {
}

void AWorldDataLayers::OnRep_EffectiveLoadedDataLayerNames() {
}

void AWorldDataLayers::OnRep_EffectiveActiveDataLayerNames() {
}

void AWorldDataLayers::OnRep_ActiveDataLayerNames() {
}

void AWorldDataLayers::OnDataLayerRuntimeStateChanged_Implementation(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState) {
}

void AWorldDataLayers::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldDataLayers, RepActiveDataLayerNames);
    DOREPLIFETIME(AWorldDataLayers, RepLoadedDataLayerNames);
    DOREPLIFETIME(AWorldDataLayers, RepEffectiveActiveDataLayerNames);
    DOREPLIFETIME(AWorldDataLayers, RepEffectiveLoadedDataLayerNames);
}



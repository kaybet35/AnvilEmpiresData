#include "LightWeightInstanceStaticMeshManager.h"
#include "HierarchicalInstancedStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ALightWeightInstanceStaticMeshManager::ALightWeightInstanceStaticMeshManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshComponent0"));
    this->InstancedStaticMeshComponent = (UHierarchicalInstancedStaticMeshComponent*)RootComponent;
}

void ALightWeightInstanceStaticMeshManager::OnRep_StaticMesh() {
}

void ALightWeightInstanceStaticMeshManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALightWeightInstanceStaticMeshManager, StaticMesh);
    DOREPLIFETIME(ALightWeightInstanceStaticMeshManager, RenderingIndicesToDataIndices);
    DOREPLIFETIME(ALightWeightInstanceStaticMeshManager, DataIndicesToRenderingIndices);
}



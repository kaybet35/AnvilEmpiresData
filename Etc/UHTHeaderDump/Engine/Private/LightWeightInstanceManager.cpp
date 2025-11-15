#include "LightWeightInstanceManager.h"
#include "Net/UnrealNetwork.h"

ALightWeightInstanceManager::ALightWeightInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RepresentedClass = NULL;
    this->AcceptedClass = AActor::StaticClass();
}

void ALightWeightInstanceManager::OnRep_Transforms() {
}

void ALightWeightInstanceManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALightWeightInstanceManager, RepresentedClass);
    DOREPLIFETIME(ALightWeightInstanceManager, InstanceTransforms);
    DOREPLIFETIME(ALightWeightInstanceManager, FreeIndices);
    DOREPLIFETIME(ALightWeightInstanceManager, ValidIndices);
}



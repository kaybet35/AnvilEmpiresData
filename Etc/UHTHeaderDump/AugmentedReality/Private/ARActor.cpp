#include "ARActor.h"
#include "Templates/SubclassOf.h"

AARActor::AARActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

UARComponent* AARActor::AddARComponent(TSubclassOf<UARComponent> InComponentClass, const FGuid& NativeID) {
    return NULL;
}



#include "TriggerVolume.h"
#include "EActorUpdateOverlapsMethod.h"

ATriggerVolume::ATriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DefaultUpdateOverlapsMethodDuringLevelStreaming = GetClass()->FindPropertyByName("DefaultUpdateOverlapsMethodDuringLevelStreaming");
    (*p_DefaultUpdateOverlapsMethodDuringLevelStreaming->ContainerPtrToValuePtr<EActorUpdateOverlapsMethod>(this)) = EActorUpdateOverlapsMethod::AlwaysUpdate;
    this->bColored = true;
}



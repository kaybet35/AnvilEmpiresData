#include "LegacyCameraShake.h"
#include "LegacyCameraShakePattern.h"
#include "Templates/SubclassOf.h"

ULegacyCameraShake::ULegacyCameraShake() {
    const FProperty* p_RootShakePattern = GetClass()->FindPropertyByName("RootShakePattern");
    (*p_RootShakePattern->ContainerPtrToValuePtr<UCameraShakePattern*>(this)) = CreateDefaultSubobject<ULegacyCameraShakePattern>(TEXT("RootShakePattern"));
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.10f;
    this->OscillationBlendOutTime = 0.20f;
    this->AnimPlayRate = 1.00f;
    this->AnimScale = 1.00f;
    this->AnimBlendInTime = 0.20f;
    this->AnimBlendOutTime = 0.20f;
    this->RandomAnimSegmentDuration = 0.00f;
    this->AnimSequence = NULL;
    this->bRandomAnimSegment = false;
    this->OscillatorTimeRemaining = 0.00f;
    this->SequenceShakePattern = NULL;
}

ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, TSubclassOf<ULegacyCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShake(APlayerCameraManager* PlayerCameraManager, TSubclassOf<ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}



bool ULegacyCameraShake::ReceiveIsFinished_Implementation() const {
    return false;
}




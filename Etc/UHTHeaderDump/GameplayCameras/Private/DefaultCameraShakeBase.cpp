#include "DefaultCameraShakeBase.h"
#include "PerlinNoiseCameraShakePattern.h"

UDefaultCameraShakeBase::UDefaultCameraShakeBase() {
    const FProperty* p_RootShakePattern = GetClass()->FindPropertyByName("RootShakePattern");
    (*p_RootShakePattern->ContainerPtrToValuePtr<UCameraShakePattern*>(this)) = CreateDefaultSubobject<UPerlinNoiseCameraShakePattern>(TEXT("RootShakePattern"));
}



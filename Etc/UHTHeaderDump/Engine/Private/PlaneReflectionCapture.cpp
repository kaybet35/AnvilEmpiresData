#include "PlaneReflectionCapture.h"
#include "PlaneReflectionCaptureComponent.h"

APlaneReflectionCapture::APlaneReflectionCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPlaneReflectionCaptureComponent>(TEXT("NewReflectionComponent"));
    const FProperty* p_CaptureComponent = GetClass()->FindPropertyByName("CaptureComponent");
    (*p_CaptureComponent->ContainerPtrToValuePtr<UReflectionCaptureComponent*>(this)) = (UReflectionCaptureComponent*)RootComponent;
}



#include "BoxReflectionCapture.h"
#include "BoxReflectionCaptureComponent.h"

ABoxReflectionCapture::ABoxReflectionCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxReflectionCaptureComponent>(TEXT("NewReflectionComponent"));
    const FProperty* p_CaptureComponent = GetClass()->FindPropertyByName("CaptureComponent");
    (*p_CaptureComponent->ContainerPtrToValuePtr<UReflectionCaptureComponent*>(this)) = (UReflectionCaptureComponent*)RootComponent;
}



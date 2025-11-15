#include "SphereReflectionCapture.h"
#include "DrawSphereComponent.h"
#include "SphereReflectionCaptureComponent.h"

ASphereReflectionCapture::ASphereReflectionCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereReflectionCaptureComponent>(TEXT("NewReflectionComponent"));
    const FProperty* p_CaptureComponent = GetClass()->FindPropertyByName("CaptureComponent");
    (*p_CaptureComponent->ContainerPtrToValuePtr<UReflectionCaptureComponent*>(this)) = (UReflectionCaptureComponent*)RootComponent;
    this->DrawCaptureRadius = CreateDefaultSubobject<UDrawSphereComponent>(TEXT("DrawRadius1"));
    this->DrawCaptureRadius->SetupAttachment(RootComponent);
}



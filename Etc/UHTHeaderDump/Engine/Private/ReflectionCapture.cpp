#include "ReflectionCapture.h"

AReflectionCapture::AReflectionCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->CaptureComponent = NULL;
}



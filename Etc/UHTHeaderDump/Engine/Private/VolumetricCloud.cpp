#include "VolumetricCloud.h"
#include "VolumetricCloudComponent.h"

AVolumetricCloud::AVolumetricCloud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricCloudComponent"));
    this->VolumetricCloudComponent = (UVolumetricCloudComponent*)RootComponent;
}



#include "RuntimeVirtualTextureVolume.h"
#include "RuntimeVirtualTextureComponent.h"

ARuntimeVirtualTextureVolume::ARuntimeVirtualTextureVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URuntimeVirtualTextureComponent>(TEXT("VirtualTextureComponent"));
    this->VirtualTextureComponent = (URuntimeVirtualTextureComponent*)RootComponent;
}



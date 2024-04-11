#include "ImgMediaPlaybackComponent.h"

UImgMediaPlaybackComponent::UImgMediaPlaybackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->LODBias = 0.00f;
}



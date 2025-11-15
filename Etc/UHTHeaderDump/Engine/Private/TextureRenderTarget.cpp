#include "TextureRenderTarget.h"

UTextureRenderTarget::UTextureRenderTarget() {
    this->NeverStream = true;
    this->LODGroup = TEXTUREGROUP_RenderTarget;
    this->TargetGamma = 0.00f;
}



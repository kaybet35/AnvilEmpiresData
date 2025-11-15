#include "MaterialExpressionTextureBase.h"

UMaterialExpressionTextureBase::UMaterialExpressionTextureBase() {
    this->Texture = NULL;
    this->SamplerType = SAMPLERTYPE_Color;
    this->IsDefaultMeshpaintTexture = false;
}



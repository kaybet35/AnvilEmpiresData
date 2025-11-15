#include "MaterialExpressionTextureSample.h"

UMaterialExpressionTextureSample::UMaterialExpressionTextureSample() {
    this->MipValueMode = TMVM_None;
    this->SamplerSource = SSM_FromTextureAsset;
    this->AutomaticViewMipBias = false;
    this->ConstCoordinate = 0;
    this->ConstMipValue = 0;
}



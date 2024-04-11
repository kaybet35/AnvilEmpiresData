#include "GLTFProxyOptions.h"

UGLTFProxyOptions::UGLTFProxyOptions() {
    this->bBakeMaterialInputs = true;
    this->DefaultMaterialBakeSize = EGLTFMaterialBakeSizePOT::POT_1024;
    this->DefaultMaterialBakeFilter = TF_Trilinear;
    this->DefaultMaterialBakeTiling = TA_Wrap;
}

void UGLTFProxyOptions::ResetToDefault() {
}



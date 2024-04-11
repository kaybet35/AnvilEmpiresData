#include "GLTFOverrideMaterialBakeSettings.h"

FGLTFOverrideMaterialBakeSettings::FGLTFOverrideMaterialBakeSettings() {
    this->bOverrideSize = false;
    this->Size = EGLTFMaterialBakeSizePOT::POT_1;
    this->bOverrideFilter = false;
    this->Filter = TF_Nearest;
    this->bOverrideTiling = false;
    this->Tiling = TA_Wrap;
}


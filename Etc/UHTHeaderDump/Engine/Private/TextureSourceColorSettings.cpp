#include "TextureSourceColorSettings.h"

FTextureSourceColorSettings::FTextureSourceColorSettings() {
    this->EncodingOverride = ETextureSourceEncoding::TSE_None;
    this->ColorSpace = ETextureColorSpace::TCS_None;
    this->ChromaticAdaptationMethod = ETextureChromaticAdaptationMethod::TCAM_None;
}


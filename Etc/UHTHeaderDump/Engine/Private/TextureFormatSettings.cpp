#include "TextureFormatSettings.h"

FTextureFormatSettings::FTextureFormatSettings() {
    this->CompressionSettings = TC_Default;
    this->CompressionNoAlpha = false;
    this->CompressionForceAlpha = false;
    this->CompressionNone = false;
    this->CompressionYCoCg = false;
    this->SRGB = false;
}


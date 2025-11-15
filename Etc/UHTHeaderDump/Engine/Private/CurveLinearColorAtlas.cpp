#include "CurveLinearColorAtlas.h"

UCurveLinearColorAtlas::UCurveLinearColorAtlas() {
    this->CompressionSettings = TC_HDR;
    this->Filter = TF_Bilinear;
    this->SRGB = false;
    this->AddressX = TA_Clamp;
    this->AddressY = TA_Clamp;
    this->TextureSize = 256;
    this->bSquareResolution = true;
    this->TextureHeight = 256;
}

bool UCurveLinearColorAtlas::GetCurvePosition(UCurveLinearColor* InCurve, float& Position) {
    return false;
}



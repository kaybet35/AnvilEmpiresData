#include "Texture2D.h"

UTexture2D::UTexture2D() {
    this->FirstResourceMemMip = 0;
    this->bTemporarilyDisableStreaming = false;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
}

int32 UTexture2D::Blueprint_GetSizeY() const {
    return 0;
}

int32 UTexture2D::Blueprint_GetSizeX() const {
    return 0;
}



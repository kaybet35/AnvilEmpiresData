#include "TextureEncodingProjectSettings.h"

UTextureEncodingProjectSettings::UTextureEncodingProjectSettings() {
    this->bFinalUsesRDO = false;
    this->FinalRDOLambda = 30;
    this->FinalEffortLevel = ETextureEncodeEffort::Normal;
    this->FinalUniversalTiling = ETextureUniversalTiling::Disabled;
    this->bFastUsesRDO = false;
    this->FastRDOLambda = 30;
    this->FastEffortLevel = ETextureEncodeEffort::Normal;
    this->FastUniversalTiling = ETextureUniversalTiling::Disabled;
    this->CookUsesSpeed = ETextureEncodeSpeed::Final;
    this->EditorUsesSpeed = ETextureEncodeSpeed::FinalIfAvailable;
}



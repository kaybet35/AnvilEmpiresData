#include "AudioParameter.h"

FAudioParameter::FAudioParameter() {
    this->FloatParam = 0.00f;
    this->BoolParam = false;
    this->IntParam = 0;
    this->ObjectParam = NULL;
    this->ParamType = EAudioParameterType::None;
}


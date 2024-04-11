#include "DatasmithSceneComponentTemplate.h"

UDatasmithSceneComponentTemplate::UDatasmithSceneComponentTemplate() {
    this->Mobility = EComponentMobility::Static;
    this->bVisible = false;
    this->bCastShadow = true;
}



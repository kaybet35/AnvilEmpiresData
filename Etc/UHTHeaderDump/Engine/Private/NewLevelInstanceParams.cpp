#include "NewLevelInstanceParams.h"

FNewLevelInstanceParams::FNewLevelInstanceParams() {
    this->Type = ELevelInstanceCreationType::LevelInstance;
    this->PivotType = ELevelInstancePivotType::CenterMinZ;
    this->PivotActor = NULL;
    this->bAlwaysShowDialog = false;
    this->TemplateWorld = NULL;
    this->bPromptForSave = false;
    this->LevelInstanceClass = NULL;
    this->bExternalActors = false;
    this->bForceExternalActors = false;
    this->bHideCreationType = false;
}


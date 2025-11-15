#include "LevelStreamingVolume.h"

ALevelStreamingVolume::ALevelStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bEditorPreVisOnly = false;
    this->bDisabled = false;
    this->StreamingUsage = SVB_LoadingAndVisibility;
}



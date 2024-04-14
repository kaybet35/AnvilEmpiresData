#include "AnvilHUD.h"

AAnvilHUD::AAnvilHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->ScreenshotRT = NULL;
}



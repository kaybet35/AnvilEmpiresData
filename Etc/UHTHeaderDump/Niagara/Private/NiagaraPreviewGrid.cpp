#include "NiagaraPreviewGrid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ANiagaraPreviewGrid::ANiagaraPreviewGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->System = NULL;
    this->ResetMode = ENiagaraPreviewGridResetMode::Never;
    this->PreviewAxisX = NULL;
    this->PreviewAxisY = NULL;
    this->PreviewClass = NULL;
    this->SpacingX = 250.00f;
    this->SpacingY = 250.00f;
    this->NumX = 0;
    this->NumY = 0;
}

void ANiagaraPreviewGrid::SetPaused(bool bPaused) {
}

void ANiagaraPreviewGrid::GetPreviews(TArray<UNiagaraComponent*>& OutPreviews) {
}

void ANiagaraPreviewGrid::DeactivatePreviews() {
}

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset) {
}



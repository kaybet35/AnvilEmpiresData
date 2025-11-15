#include "BrushComponent.h"

UBrushComponent::UBrushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bHiddenInGame = true;
    this->bUseAsOccluder = true;
    this->AlwaysLoadOnClient = false;
    this->AlwaysLoadOnServer = false;
    this->bUseEditorCompositing = true;
    this->Brush = NULL;
    this->BrushBodySetup = NULL;
}



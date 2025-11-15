#include "Brush.h"
#include "BrushComponent.h"
#include "ESpawnActorCollisionHandlingMethod.h"

ABrush::ABrush(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UBrushComponent>(TEXT("BrushComponent0"));
    this->BrushType = Brush_Default;
    this->PolyFlags = 0;
    this->bColored = false;
    this->bSolidWhenSelected = false;
    this->bPlaceableFromClassBrowser = false;
    this->bNotForClientOrServer = false;
    this->Brush = NULL;
    this->BrushComponent = (UBrushComponent*)RootComponent;
    this->bInManipulation = false;
}



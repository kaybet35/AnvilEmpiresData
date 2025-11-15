#include "NavigationObjectBase.h"
#include "CapsuleComponent.h"
#include "ESpawnActorCollisionHandlingMethod.h"

ANavigationObjectBase::ANavigationObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->GoodSprite = NULL;
    this->BadSprite = NULL;
    this->bIsPIEPlayerStart = false;
}



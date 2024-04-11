#include "ArchVisCharacter.h"
#include "ArchVisCharMovementComponent.h"

AArchVisCharacter::AArchVisCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UArchVisCharMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->LookUpAxisName = TEXT("LookUp");
    this->LookUpAtRateAxisName = TEXT("LookUpRate");
    this->TurnAxisName = TEXT("Turn");
    this->TurnAtRateAxisName = TEXT("TurnRate");
    this->MoveForwardAxisName = TEXT("MoveForward");
    this->MoveRightAxisName = TEXT("MoveRight");
    this->MouseSensitivityScale_Pitch = 0.03f;
    this->MouseSensitivityScale_Yaw = 0.03f;
}



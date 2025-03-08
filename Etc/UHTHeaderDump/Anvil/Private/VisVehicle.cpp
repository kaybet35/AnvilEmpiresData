#include "VisVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EntityAttachableDataComponent -FallbackName=EntityAttachableDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HealthDataComponent -FallbackName=HealthDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=VehicleMovementDataComponent -FallbackName=VehicleMovementDataComponent

AVisVehicle::AVisVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->bNightVisibility = true;
    this->VehicleMovementDataComponent = CreateDefaultSubobject<UVehicleMovementDataComponent>(TEXT("VehicleMovementDataComponent"));
    this->EntityAttachableDataComponent = CreateDefaultSubobject<UEntityAttachableDataComponent>(TEXT("EntityAttachableDataComponent"));
    this->MoveLoopAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("MovementAudioComponent"));
    this->MoveLoopParticleSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MovementParticleSystem"));
    this->HealthDataComponent = CreateDefaultSubobject<UHealthDataComponent>(TEXT("HealthDataComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->MoveLoopParticleSystem->SetupAttachment(RootComponent);
    this->MoveLoopAudioComponent->SetupAttachment(RootComponent);
}



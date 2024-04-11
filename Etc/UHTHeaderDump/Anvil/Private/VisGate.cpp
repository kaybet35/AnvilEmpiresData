#include "VisGate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=GateDataComponent -FallbackName=GateDataComponent

AVisGate::AVisGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GateDataComponent = CreateDefaultSubobject<UGateDataComponent>(TEXT("GateDataComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}



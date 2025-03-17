#include "VisGrainMill.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=GrainMillDataComponent -FallbackName=GrainMillDataComponent

AVisGrainMill::AVisGrainMill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrainMillDataComponent = CreateDefaultSubobject<UGrainMillDataComponent>(TEXT("GrainMillDataComponent"));
    this->CrankHandleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CrankHandleMesh"));
    this->GrainMillMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GrainMillMesh"));
    this->CrankHandleAnimInst = NULL;
    this->GrainMillAnimInst = NULL;
    this->CrankHandleMesh->SetupAttachment(RootComponent);
    this->GrainMillMesh->SetupAttachment(RootComponent);
}



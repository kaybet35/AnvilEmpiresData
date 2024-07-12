#include "UnderworldModulePrefab.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AUnderworldModulePrefab::AUnderworldModulePrefab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->ModuleFootprint = CreateDefaultSubobject<UBoxComponent>(TEXT("ModuleFootprint"));
    this->ModuleFootprint->SetupAttachment(RootComponent);
}



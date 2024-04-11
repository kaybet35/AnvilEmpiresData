#include "SwitchActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASwitchActor::ASwitchActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->LastSelectedOption = 0;
}

void ASwitchActor::SelectOption(int32 OptionIndex) {
}

int32 ASwitchActor::GetSelectedOption() const {
    return 0;
}

TArray<AActor*> ASwitchActor::GetOptions() const {
    return TArray<AActor*>();
}



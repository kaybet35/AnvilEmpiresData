#include "LevelVariantSetsActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ALevelVariantSetsActor::ALevelVariantSetsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

bool ALevelVariantSetsActor::SwitchOnVariantByName(const FString& VariantSetName, const FString& VariantName) {
    return false;
}

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex) {
    return false;
}

void ALevelVariantSetsActor::SetLevelVariantSets(ULevelVariantSets* InVariantSets) {
}

ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad) {
    return NULL;
}



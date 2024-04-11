#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../Anvil/Config/DefaultGameplayTags.ini");
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->AllowEditorTagUnloading = true;
    this->AllowGameTagUnloading = false;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}



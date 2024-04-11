#include "DatasmithContentBlueprintLibrary.h"

UDatasmithContentBlueprintLibrary::UDatasmithContentBlueprintLibrary() {
}

TArray<FString> UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValuesForKey(UObject* Object, FName Key, bool bPartialMatchKey) {
    return TArray<FString>();
}

FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(UObject* Object, FName Key, bool bPartialMatchKey) {
    return TEXT("");
}

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, const FString& StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues) {
}

UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(UObject* Object) {
    return NULL;
}



#pragma once
#include "CoreMinimal.h"
#include "FieldCookedMetaDataStore.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FFieldCookedMetaDataStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> FieldMetaData;
    
public:
    FFieldCookedMetaDataStore();
};


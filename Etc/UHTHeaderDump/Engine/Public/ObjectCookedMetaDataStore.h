#pragma once
#include "CoreMinimal.h"
#include "ObjectCookedMetaDataStore.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FObjectCookedMetaDataStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> ObjectMetaData;
    
public:
    FObjectCookedMetaDataStore();
};


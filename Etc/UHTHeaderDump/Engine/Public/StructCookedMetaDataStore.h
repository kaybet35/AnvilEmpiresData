#pragma once
#include "CoreMinimal.h"
#include "FieldCookedMetaDataStore.h"
#include "ObjectCookedMetaDataStore.h"
#include "StructCookedMetaDataStore.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FStructCookedMetaDataStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectCookedMetaDataStore ObjectMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFieldCookedMetaDataStore> PropertiesMetaData;
    
public:
    FStructCookedMetaDataStore();
};


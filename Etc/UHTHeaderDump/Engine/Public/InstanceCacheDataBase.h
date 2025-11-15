#pragma once
#include "CoreMinimal.h"
#include "DataCacheDuplicatedObjectData.h"
#include "InstanceCacheDataBase.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FInstanceCacheDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SavedProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataCacheDuplicatedObjectData UniqueTransientPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataCacheDuplicatedObjectData> DuplicatedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReferencedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReferencedNames;
    
public:
    FInstanceCacheDataBase();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StructCookedMetaDataStore.h"
#include "ClassCookedMetaData.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UClassCookedMetaData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructCookedMetaDataStore ClassMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStructCookedMetaDataStore> FunctionsMetaData;
    
public:
    UClassCookedMetaData();

};


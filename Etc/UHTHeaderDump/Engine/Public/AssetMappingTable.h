#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetMapping.h"
#include "AssetMappingTable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAssetMappingTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAssetMapping> MappedAssets;
    
public:
    UAssetMappingTable();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UAssetImportData : public UObject {
    GENERATED_BODY()
public:
    UAssetImportData();

};


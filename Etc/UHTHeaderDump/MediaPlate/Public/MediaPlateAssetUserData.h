#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "MediaPlateAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMediaPlateAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UMediaPlateAssetUserData();

};


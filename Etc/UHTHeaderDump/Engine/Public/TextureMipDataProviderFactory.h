#pragma once
#include "CoreMinimal.h"
#include "AssetUserData.h"
#include "TextureMipDataProviderFactory.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API UTextureMipDataProviderFactory : public UAssetUserData {
    GENERATED_BODY()
public:
    UTextureMipDataProviderFactory();

};


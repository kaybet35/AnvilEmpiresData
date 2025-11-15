#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
#include "TextureAddress.h"
#include "Texture2DArray.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTexture2DArray : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressZ;
    
    UTexture2DArray();

};


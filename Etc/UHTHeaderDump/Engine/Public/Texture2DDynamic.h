#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
#include "Texture.h"
#include "Texture2DDynamic.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTexture2DDynamic : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPixelFormat> Format;
    
    UTexture2DDynamic();

};


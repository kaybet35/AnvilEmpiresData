#pragma once
#include "CoreMinimal.h"
#include "EShadowMapFlags.h"
#include "Texture2D.h"
#include "ShadowMapTexture2D.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UShadowMapTexture2D : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EShadowMapFlags> ShadowmapFlags;
    
    UShadowMapTexture2D();

};


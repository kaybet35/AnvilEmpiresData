#pragma once
#include "CoreMinimal.h"
#include "DepthFieldGlowInfo.h"
#include "FontRenderInfo.generated.h"

USTRUCT(BlueprintType)
struct FFontRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClipText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableShadow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDepthFieldGlowInfo GlowInfo;
    
    ENGINE_API FFontRenderInfo();
};


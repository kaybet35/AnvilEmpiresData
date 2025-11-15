#pragma once
#include "CoreMinimal.h"
#include "StreamingTextureBuildInfo.generated.h"

USTRUCT(BlueprintType)
struct FStreamingTextureBuildInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PackedRelativeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureLevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TexelFactor;
    
    ENGINE_API FStreamingTextureBuildInfo();
};


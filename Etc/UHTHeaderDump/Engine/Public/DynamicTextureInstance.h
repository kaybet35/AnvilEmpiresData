#pragma once
#include "CoreMinimal.h"
#include "StreamableTextureInstance.h"
#include "DynamicTextureInstance.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ENGINE_API FDynamicTextureInstance : public FStreamableTextureInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalRadius;
    
    FDynamicTextureInstance();
};


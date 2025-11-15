#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "VirtualTextureBuildSettings.h"
#include "VirtualTexture2D.generated.h"

UCLASS(Blueprintable)
class UVirtualTexture2D : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualTextureBuildSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinuousUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSinglePhysicalSpace;
    
    UVirtualTexture2D();

};


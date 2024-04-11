#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LandscapeProxy.h"
#include "Landscape.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI)
class ALandscape : public ALandscapeProxy {
    GENERATED_BODY()
public:
    ALandscape(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RenderHeightmap(const FTransform& InWorldTransform, const FBox2D& InExtents, UTextureRenderTarget2D* OutRenderTarget);
    
};


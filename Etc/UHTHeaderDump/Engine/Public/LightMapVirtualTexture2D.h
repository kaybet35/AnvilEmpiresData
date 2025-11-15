#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "LightMapVirtualTexture2D.generated.h"

UCLASS(Blueprintable)
class ENGINE_API ULightMapVirtualTexture2D : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> TypeToLayer;
    
    ULightMapVirtualTexture2D();

};


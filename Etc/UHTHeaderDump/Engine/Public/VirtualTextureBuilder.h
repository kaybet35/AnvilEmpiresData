#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VirtualTextureBuilder.generated.h"

class UVirtualTexture2D;

UCLASS(Blueprintable)
class ENGINE_API UVirtualTextureBuilder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVirtualTexture2D* Texture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BuildHash;
    
    UVirtualTextureBuilder();

};


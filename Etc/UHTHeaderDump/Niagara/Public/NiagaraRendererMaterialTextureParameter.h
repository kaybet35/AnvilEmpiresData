#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererMaterialTextureParameter.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FNiagaraRendererMaterialTextureParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    NIAGARA_API FNiagaraRendererMaterialTextureParameter();
};


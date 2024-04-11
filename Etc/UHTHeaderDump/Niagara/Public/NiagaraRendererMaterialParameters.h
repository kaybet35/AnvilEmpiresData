#pragma once
#include "CoreMinimal.h"
#include "NiagaraMaterialAttributeBinding.h"
#include "NiagaraRendererMaterialScalarParameter.h"
#include "NiagaraRendererMaterialTextureParameter.h"
#include "NiagaraRendererMaterialVectorParameter.h"
#include "NiagaraRendererMaterialParameters.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRendererMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraMaterialAttributeBinding> AttributeBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialScalarParameter> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialVectorParameter> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraRendererMaterialTextureParameter> TextureParameters;
    
    NIAGARA_API FNiagaraRendererMaterialParameters();
};


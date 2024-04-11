#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceVirtualTexture.generated.h"

class URuntimeVirtualTexture;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding TextureUserParameter;
    
    UNiagaraDataInterfaceVirtualTexture();

};


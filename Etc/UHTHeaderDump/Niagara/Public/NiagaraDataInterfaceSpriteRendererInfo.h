#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSpriteRendererInfo.generated.h"

class UNiagaraSpriteRendererProperties;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSpriteRendererProperties* SpriteRenderer;
    
public:
    UNiagaraDataInterfaceSpriteRendererInfo();

};


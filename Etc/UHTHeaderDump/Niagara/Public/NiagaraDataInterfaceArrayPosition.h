#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraPosition.h"
#include "NiagaraDataInterfaceArrayPosition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraPosition> PositionData;
    
    UNiagaraDataInterfaceArrayPosition();

};


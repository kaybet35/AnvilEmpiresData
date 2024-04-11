#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayUInt8.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> InternalIntData;
    
    UNiagaraDataInterfaceArrayUInt8();

};


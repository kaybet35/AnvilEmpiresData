#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat4f -FallbackName=Quat4f
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayQuat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuat4f> InternalQuatData;
    
    UNiagaraDataInterfaceArrayQuat();

};


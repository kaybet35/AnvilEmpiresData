#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraValidationRule.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraValidationRule : public UObject {
    GENERATED_BODY()
public:
    UNiagaraValidationRule();

};


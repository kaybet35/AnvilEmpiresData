#pragma once
#include "CoreMinimal.h"
#include "NiagaraUObjectPropertyReaderRemap.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraUObjectPropertyReaderRemap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraphName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemapName;
    
    NIAGARA_API FNiagaraUObjectPropertyReaderRemap();
};


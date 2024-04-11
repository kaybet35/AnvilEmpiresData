#pragma once
#include "CoreMinimal.h"
#include "NiagaraShaderScriptExternalConstant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraShaderScriptExternalConstant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    NIAGARASHADER_API FNiagaraShaderScriptExternalConstant();
};


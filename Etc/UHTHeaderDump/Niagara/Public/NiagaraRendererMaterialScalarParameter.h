#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererMaterialScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRendererMaterialScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    NIAGARA_API FNiagaraRendererMaterialScalarParameter();
};


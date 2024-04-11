#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraComponentPropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraComponentPropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding AttributeBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraTypeDefinition PropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetadataSetterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    NIAGARA_API FNiagaraComponentPropertyBinding();
};


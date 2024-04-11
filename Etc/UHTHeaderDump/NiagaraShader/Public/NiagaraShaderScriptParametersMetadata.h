#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGPUParamInfo.h"
#include "NiagaraShaderScriptExternalConstant.h"
#include "NiagaraShaderScriptParametersMetadata.generated.h"

USTRUCT(BlueprintType)
struct NIAGARASHADER_API FNiagaraShaderScriptParametersMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LooseMetadataNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExternalConstantsInterpolated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraShaderScriptExternalConstant> ExternalConstants;
    
    FNiagaraShaderScriptParametersMetadata();
};


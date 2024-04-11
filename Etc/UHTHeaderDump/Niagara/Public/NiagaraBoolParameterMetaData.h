#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBoolDisplayMode.h"
#include "NiagaraBoolParameterMetaData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraBoolParameterMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraBoolDisplayMode DisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideNameTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideNameFalse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconOverrideTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconOverrideFalse;
    
    FNiagaraBoolParameterMetaData();
};


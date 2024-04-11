#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemVisibilityCullingSettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemVisibilityCullingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullWhenNotRendered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCullByViewFrustum: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPreCullingByViewFrustum: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeOutsideViewFrustum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeWithoutRender;
    
    NIAGARA_API FNiagaraSystemVisibilityCullingSettings();
};


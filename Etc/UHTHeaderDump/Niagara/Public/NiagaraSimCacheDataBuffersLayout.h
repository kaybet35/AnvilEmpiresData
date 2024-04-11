#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraSimCacheVariable.h"
#include "NiagaraSimCacheDataBuffersLayout.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheDataBuffersLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayoutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSimCacheVariable> Variables;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FloatCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HalfCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Int32Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RebaseVariableNames;
    
    NIAGARA_API FNiagaraSimCacheDataBuffersLayout();
};


#pragma once
#include "CoreMinimal.h"
#include "NiagaraVMExecutableByteCode.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableByteCode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UncompressedSize;
    
public:
    FNiagaraVMExecutableByteCode();
};


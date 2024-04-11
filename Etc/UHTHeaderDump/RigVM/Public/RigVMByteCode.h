#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeEntry.h"
#include "RigVMByteCode.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMByteCode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMByteCodeEntry> Entries;
    
public:
    FRigVMByteCode();
};


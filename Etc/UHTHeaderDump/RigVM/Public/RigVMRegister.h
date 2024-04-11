#pragma once
#include "CoreMinimal.h"
#include "ERigVMRegisterType.h"
#include "RigVMRegister.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMRegister {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMRegisterType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ByteIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ElementSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ElementCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SliceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AlignmentBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 TrailingBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScriptStructIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamic;
    
    FRigVMRegister();
};


#pragma once
#include "CoreMinimal.h"
#include "RigVMTemplateArgumentType.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMTemplateArgumentType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CPPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CPPTypeObject;
    
    FRigVMTemplateArgumentType();
};


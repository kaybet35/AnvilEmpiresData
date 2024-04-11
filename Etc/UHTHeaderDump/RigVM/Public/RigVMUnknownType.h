#pragma once
#include "CoreMinimal.h"
#include "RigVMUnknownType.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMUnknownType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
public:
    FRigVMUnknownType();
};


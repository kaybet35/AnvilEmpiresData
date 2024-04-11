#pragma once
#include "CoreMinimal.h"
#include "RigVM.h"
#include "RigVMNativized.generated.h"

UCLASS(Abstract, Blueprintable)
class RIGVM_API URigVMNativized : public URigVM {
    GENERATED_BODY()
public:
    URigVMNativized();

};


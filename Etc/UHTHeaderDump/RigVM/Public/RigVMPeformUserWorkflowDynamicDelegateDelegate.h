#pragma once
#include "CoreMinimal.h"
#include "RigVMPeformUserWorkflowDynamicDelegateDelegate.generated.h"

class UObject;
class URigVMUserWorkflowOptions;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FRigVMPeformUserWorkflowDynamicDelegate, const URigVMUserWorkflowOptions*, InOptions, UObject*, InController);


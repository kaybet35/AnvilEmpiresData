#pragma once
#include "CoreMinimal.h"
#include "ERigVMUserWorkflowType.h"
#include "RigVMPeformUserWorkflowDynamicDelegateDelegate.h"
#include "RigVMUserWorkflow.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMUserWorkflow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMUserWorkflowType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMPeformUserWorkflowDynamicDelegate PerformDynamicDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* OptionsClass;
    
public:
    FRigVMUserWorkflow();
};


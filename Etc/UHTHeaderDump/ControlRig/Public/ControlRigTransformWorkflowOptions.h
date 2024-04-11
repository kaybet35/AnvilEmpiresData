#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMUserWorkflow -FallbackName=RigVMUserWorkflow
#include "ControlRigWorkflowOptions.h"
#include "ERigTransformType.h"
#include "ControlRigTransformWorkflowOptions.generated.h"

class UObject;

UCLASS(Blueprintable)
class CONTROLRIG_API UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERigTransformType::Type> TransformType;
    
    UControlRigTransformWorkflowOptions();

    UFUNCTION(BlueprintCallable)
    TArray<FRigVMUserWorkflow> ProvideWorkflows(const UObject* InSubject);
    
};


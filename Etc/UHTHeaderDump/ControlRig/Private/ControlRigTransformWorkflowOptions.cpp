#include "ControlRigTransformWorkflowOptions.h"

UControlRigTransformWorkflowOptions::UControlRigTransformWorkflowOptions() {
    this->TransformType = ERigTransformType::CurrentGlobal;
}

TArray<FRigVMUserWorkflow> UControlRigTransformWorkflowOptions::ProvideWorkflows(const UObject* InSubject) {
    return TArray<FRigVMUserWorkflow>();
}



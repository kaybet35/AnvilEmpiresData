#include "RigVMUserWorkflowOptions.h"

URigVMUserWorkflowOptions::URigVMUserWorkflowOptions() {
    this->Subject = NULL;
}

bool URigVMUserWorkflowOptions::RequiresDialog() const {
    return false;
}

void URigVMUserWorkflowOptions::ReportWarning(const FString& InMessage) {
}

void URigVMUserWorkflowOptions::ReportInfo(const FString& InMessage) {
}

void URigVMUserWorkflowOptions::ReportError(const FString& InMessage) {
}

bool URigVMUserWorkflowOptions::IsValid() const {
    return false;
}



#include "ControlRigWorkflowOptions.h"

UControlRigWorkflowOptions::UControlRigWorkflowOptions() {
    this->Hierarchy = NULL;
}

bool UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected() const {
    return false;
}



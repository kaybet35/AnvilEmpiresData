#include "RigUnit_ParentConstraint_AdvancedSettings.h"

FRigUnit_ParentConstraint_AdvancedSettings::FRigUnit_ParentConstraint_AdvancedSettings() {
    this->InterpolationType = EConstraintInterpType::Average;
    this->RotationOrderForFilter = EEulerRotationOrder::XYZ;
}


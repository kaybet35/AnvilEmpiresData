#include "RigUnit_RotationConstraint_AdvancedSettings.h"

FRigUnit_RotationConstraint_AdvancedSettings::FRigUnit_RotationConstraint_AdvancedSettings() {
    this->InterpolationType = EConstraintInterpType::Average;
    this->RotationOrderForFilter = EEulerRotationOrder::XYZ;
}


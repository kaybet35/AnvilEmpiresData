#include "ControlRigComponentMappedComponent.h"

FControlRigComponentMappedComponent::FControlRigComponentMappedComponent() {
    this->Component = NULL;
    this->ElementType = ERigElementType::None;
    this->Direction = EControlRigComponentMapDirection::Input;
}


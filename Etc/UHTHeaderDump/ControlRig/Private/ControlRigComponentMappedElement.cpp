#include "ControlRigComponentMappedElement.h"

FControlRigComponentMappedElement::FControlRigComponentMappedElement() {
    this->TransformIndex = 0;
    this->ElementType = ERigElementType::None;
    this->Direction = EControlRigComponentMapDirection::Input;
    this->Weight = 0.00f;
    this->Space = EControlRigComponentSpace::WorldSpace;
    this->SceneComponent = NULL;
    this->ElementIndex = 0;
    this->SubIndex = 0;
}


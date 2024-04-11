#include "OpenColorIOColorTransform.h"

UOpenColorIOColorTransform::UOpenColorIOColorTransform() {
    this->ConfigurationOwner = NULL;
    this->bIsDisplayViewType = false;
    this->DisplayViewDirection = EOpenColorIOViewTransformDirection::Forward;
}



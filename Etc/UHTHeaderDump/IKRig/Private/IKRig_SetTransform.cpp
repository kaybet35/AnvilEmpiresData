#include "IKRig_SetTransform.h"
#include "IKRig_SetTransformEffector.h"

UIKRig_SetTransform::UIKRig_SetTransform() {
    this->Effector = CreateDefaultSubobject<UIKRig_SetTransformEffector>(TEXT("Effector"));
}



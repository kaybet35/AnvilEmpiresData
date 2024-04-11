#include "OperatorField.h"

UOperatorField::UOperatorField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Magnitude = 1.00f;
    this->RightField = NULL;
    this->LeftField = NULL;
    this->Operation = Field_Multiply;
}

UOperatorField* UOperatorField::SetOperatorField(float NewMagnitude, const UFieldNodeBase* NewLeftField, const UFieldNodeBase* NewRightField, TEnumAsByte<EFieldOperationType> NewOperation) {
    return NULL;
}



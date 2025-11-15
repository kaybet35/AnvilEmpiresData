#include "MaterialExpressionScalarParameter.h"

UMaterialExpressionScalarParameter::UMaterialExpressionScalarParameter() {
    this->DefaultValue = 0.00f;
    this->bUseCustomPrimitiveData = false;
    this->PrimitiveDataIndex = 0;
    this->SliderMin = 0.00f;
    this->SliderMax = 0.00f;
}



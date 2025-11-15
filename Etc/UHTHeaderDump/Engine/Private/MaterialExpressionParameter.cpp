#include "MaterialExpressionParameter.h"

UMaterialExpressionParameter::UMaterialExpressionParameter() {
    this->bIsParameterExpression = true;
    this->ParameterName = TEXT("Param");
    this->SortPriority = 32;
}



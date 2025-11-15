#include "MaterialExpressionComposite.h"

UMaterialExpressionComposite::UMaterialExpressionComposite() {
    this->SubgraphName = TEXT("Collapsed Nodes");
    this->InputExpressions = NULL;
    this->OutputExpressions = NULL;
}



#include "MaterialExpression.h"

UMaterialExpression::UMaterialExpression() {
    this->MaterialExpressionEditorX = 0;
    this->MaterialExpressionEditorY = 0;
    this->GraphNode = NULL;
    this->SubgraphExpression = NULL;
    this->Material = NULL;
    this->Function = NULL;
    this->bRealtimePreview = false;
    this->bNeedToUpdatePreview = false;
    this->bIsParameterExpression = false;
    this->bCommentBubbleVisible = false;
    this->bShowOutputNameOnPin = false;
    this->bShowMaskColorsOnPin = false;
    this->bHidePreviewWindow = false;
    this->bCollapsed = false;
    this->bShaderInputData = false;
    this->bShowInputs = false;
    this->bShowOutputs = false;
}



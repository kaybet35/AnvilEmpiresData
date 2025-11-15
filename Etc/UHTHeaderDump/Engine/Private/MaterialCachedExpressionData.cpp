#include "MaterialCachedExpressionData.h"

FMaterialCachedExpressionData::FMaterialCachedExpressionData() {
    this->bHasMaterialLayers = false;
    this->bHasRuntimeVirtualTextureOutput = false;
    this->bHasSceneColor = false;
    this->bHasPerInstanceCustomData = false;
    this->bHasPerInstanceRandom = false;
    this->bHasVertexInterpolator = false;
    this->PropertyConnectedBitmask = 0;
}


#include "AnimNode_RotationOffsetBlendSpaceGraph.h"

FAnimNode_RotationOffsetBlendSpaceGraph::FAnimNode_RotationOffsetBlendSpaceGraph() {
    this->LODThreshold = 0;
    this->Alpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
}


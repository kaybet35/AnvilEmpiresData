#include "BlendSpaceTriangleEdgeInfo.h"

FBlendSpaceTriangleEdgeInfo::FBlendSpaceTriangleEdgeInfo() {
    this->NeighbourTriangleIndex = 0;
    this->AdjacentPerimeterTriangleIndices[0] = 0;
    this->AdjacentPerimeterTriangleIndices[1] = 0;
    this->AdjacentPerimeterVertexIndices[0] = 0;
    this->AdjacentPerimeterVertexIndices[1] = 0;
}


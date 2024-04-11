#include "CreateNonOverlappingConvexHullsDataflowNode.h"

FCreateNonOverlappingConvexHullsDataflowNode::FCreateNonOverlappingConvexHullsDataflowNode() {
    this->CanRemoveFraction = 0.00f;
    this->CanExceedFraction = 0.00f;
    this->SimplificationDistanceThreshold = 0.00f;
}


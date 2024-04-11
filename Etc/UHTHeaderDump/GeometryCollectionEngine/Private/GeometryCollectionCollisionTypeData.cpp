#include "GeometryCollectionCollisionTypeData.h"

FGeometryCollectionCollisionTypeData::FGeometryCollectionCollisionTypeData() {
    this->CollisionType = ECollisionTypeEnum::Chaos_Volumetric;
    this->ImplicitType = EImplicitTypeEnum::Chaos_Implicit_Box;
    this->CollisionObjectReductionPercentage = 0.00f;
    this->CollisionMarginFraction = 0.00f;
}


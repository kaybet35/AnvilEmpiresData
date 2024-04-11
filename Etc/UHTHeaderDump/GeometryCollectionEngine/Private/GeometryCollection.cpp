#include "GeometryCollection.h"

UGeometryCollection::UGeometryCollection() {
    this->EnableClustering = true;
    this->ClusterGroupIndex = 0;
    this->MaxClusterLevel = 100;
    this->DamageThreshold.AddDefaulted(3);
    this->bUseSizeSpecificDamageThreshold = false;
    this->PerClusterOnlyDamageThreshold = false;
    this->ClusterConnectionType = EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation;
    this->ConnectionGraphBoundsFilteringMargin = 0.00f;
    this->bUseFullPrecisionUVs = false;
    this->bStripOnCook = false;
    this->EnableNanite = false;
    this->bMassAsDensity = true;
    this->Mass = 2500.00f;
    this->MinimumMassClamp = 0.10f;
    this->bImportCollisionFromSource = false;
    this->bRemoveOnMaxSleep = false;
    this->bSlowMovingAsSleeping = true;
    this->SlowMovingVelocityThreshold = 1.00f;
    this->EnableRemovePiecesOnFracture = false;
    this->Dataflow = NULL;
    this->BoneSelectedMaterialIndex = 0;
}



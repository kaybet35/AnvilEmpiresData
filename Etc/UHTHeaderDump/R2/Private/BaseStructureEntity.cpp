#include "BaseStructureEntity.h"

UBaseStructureEntity::UBaseStructureEntity() {
    this->TeamComp = NULL;
    this->HealthComp = NULL;
    this->RepairComp = NULL;
    this->StructureComp = NULL;
    this->DestroyableComp = NULL;
    this->MeshCollisionComp = NULL;
    this->FootprintComp = NULL;
    this->UseBoxComp = NULL;
    this->ActionBoxComp = NULL;
    this->DecayComp = NULL;
    this->ScorchComp = NULL;
}



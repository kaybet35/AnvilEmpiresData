#include "NiagaraDataInterfaceRigidMeshCollisionQuery.h"

UNiagaraDataInterfaceRigidMeshCollisionQuery::UNiagaraDataInterfaceRigidMeshCollisionQuery() {
    this->OnlyUseMoveable = true;
    this->GlobalSearchAllowed = true;
    this->GlobalSearchForced = false;
    this->GlobalSearchFallback_Unscripted = true;
    this->MaxNumPrimitives = 100;
}



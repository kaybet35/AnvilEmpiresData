#include "NiagaraDataInterfaceStaticMesh.h"

UNiagaraDataInterfaceStaticMesh::UNiagaraDataInterfaceStaticMesh() {
    this->SourceMode = ENDIStaticMesh_SourceMode::Default;
    this->DefaultMesh = NULL;
    this->SourceComponent = NULL;
    this->bUsePhysicsBodyVelocity = false;
}

void UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason) {
}



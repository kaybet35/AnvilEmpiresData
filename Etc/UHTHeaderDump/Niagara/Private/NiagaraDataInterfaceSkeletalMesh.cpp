#include "NiagaraDataInterfaceSkeletalMesh.h"

UNiagaraDataInterfaceSkeletalMesh::UNiagaraDataInterfaceSkeletalMesh() {
    this->SourceMode = ENDISkeletalMesh_SourceMode::Default;
    this->SourceComponent = NULL;
    this->SkinningMode = ENDISkeletalMesh_SkinningMode::SkinOnTheFly;
    this->WholeMeshLOD = -1;
    this->ExcludeBoneName = TEXT("Root");
    this->bExcludeBone = false;
    this->UvSetIndex = 0;
    this->bRequireCurrentFrameData = true;
}

void UNiagaraDataInterfaceSkeletalMesh::OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason) {
}



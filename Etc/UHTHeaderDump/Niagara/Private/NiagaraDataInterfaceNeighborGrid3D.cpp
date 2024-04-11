#include "NiagaraDataInterfaceNeighborGrid3D.h"
#include "ESetResolutionMethod.h"

UNiagaraDataInterfaceNeighborGrid3D::UNiagaraDataInterfaceNeighborGrid3D() {
    this->SetResolutionMethod = ESetResolutionMethod::CellSize;
    this->MaxNeighborsPerCell = 8;
}



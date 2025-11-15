#include "ParticleModuleLocationBoneSocket.h"

UParticleModuleLocationBoneSocket::UParticleModuleLocationBoneSocket() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->bFinalUpdateModule = true;
    this->bUpdateForGPUEmitter = true;
    this->bSupported3DDrawMode = true;
    this->SourceType = BONESOCKETSOURCE_Sockets;
    this->SelectionMethod = BONESOCKETSEL_Sequential;
    this->bUpdatePositionEachFrame = false;
    this->bOrientMeshEmitters = true;
    this->bInheritBoneVelocity = false;
    this->InheritVelocityScale = 1.00f;
    this->SkelMeshActorParamName = TEXT("BoneSocketActor");
    this->NumPreSelectedIndices = 10;
}



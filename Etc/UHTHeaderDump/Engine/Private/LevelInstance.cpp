#include "LevelInstance.h"
#include "LevelInstanceComponent.h"
#include "Net/UnrealNetwork.h"

ALevelInstance::ALevelInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULevelInstanceComponent>(TEXT("Root"));
}

void ALevelInstance::OnRep_LevelInstanceSpawnGuid() {
}

void ALevelInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelInstance, LevelInstanceSpawnGuid);
}



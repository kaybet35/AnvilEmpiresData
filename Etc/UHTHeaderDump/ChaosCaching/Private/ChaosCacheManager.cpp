#include "ChaosCacheManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AChaosCacheManager::AChaosCacheManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CacheCollection = NULL;
    this->CacheMode = ECacheMode::Record;
    this->StartMode = EStartMode::Timed;
    this->StartTime = 0.00f;
}

void AChaosCacheManager::TriggerComponentByCache(FName InCacheName) {
}

void AChaosCacheManager::TriggerComponent(UPrimitiveComponent* InComponent) {
}

void AChaosCacheManager::TriggerAll() {
}

void AChaosCacheManager::SetStartTime(float InStartTime) {
}

void AChaosCacheManager::ResetSingleTransform(int32 InIndex) {
}

void AChaosCacheManager::ResetAllComponentTransforms() {
}



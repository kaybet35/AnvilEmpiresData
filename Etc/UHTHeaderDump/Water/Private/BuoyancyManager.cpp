#include "BuoyancyManager.h"

ABuoyancyManager::ABuoyancyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ABuoyancyManager::GetBuoyancyComponentManager(const UObject* WorldContextObject, ABuoyancyManager*& Manager) {
    return false;
}



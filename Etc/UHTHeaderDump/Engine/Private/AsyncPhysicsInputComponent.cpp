#include "AsyncPhysicsInputComponent.h"

UAsyncPhysicsInputComponent::UAsyncPhysicsInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DataClass = NULL;
    this->DataToConsume = NULL;
    this->DataToWrite = NULL;
}

void UAsyncPhysicsInputComponent::ServerRPCBufferInput_Implementation(UAsyncPhysicsData* AsyncPhysicsData) {
}

UAsyncPhysicsData* UAsyncPhysicsInputComponent::GetDataToWrite() const {
    return NULL;
}

UAsyncPhysicsData* UAsyncPhysicsInputComponent::GetDataToConsume() const {
    return NULL;
}



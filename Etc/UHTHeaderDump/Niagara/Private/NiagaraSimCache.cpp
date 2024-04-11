#include "NiagaraSimCache.h"

UNiagaraSimCache::UNiagaraSimCache() {
    this->StartSeconds = 0.00f;
    this->DurationSeconds = 0.00f;
    this->bNeedsReadComponentMappingRecache = true;
}

void UNiagaraSimCache::ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadIntAttribute(TArray<int32>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

void UNiagaraSimCache::ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const {
}

bool UNiagaraSimCache::IsEmpty() const {
    return false;
}

bool UNiagaraSimCache::IsCacheValid() const {
    return false;
}

float UNiagaraSimCache::GetStartSeconds() const {
    return 0.0f;
}

int32 UNiagaraSimCache::GetNumFrames() const {
    return 0;
}

int32 UNiagaraSimCache::GetNumEmitters() const {
    return 0;
}

TArray<FName> UNiagaraSimCache::GetEmitterNames() const {
    return TArray<FName>();
}

FName UNiagaraSimCache::GetEmitterName(int32 EmitterIndex) const {
    return NAME_None;
}

ENiagaraSimCacheAttributeCaptureMode UNiagaraSimCache::GetAttributeCaptureMode() const {
    return ENiagaraSimCacheAttributeCaptureMode::All;
}



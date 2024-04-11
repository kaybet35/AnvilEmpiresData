#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "ENiagaraSimCacheAttributeCaptureMode.h"
#include "NiagaraSimCacheCreateParameters.h"
#include "NiagaraSimCacheFrame.h"
#include "NiagaraSimCacheLayout.h"
#include "NiagaraVariableBase.h"
#include "NiagaraSimCache.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraSimCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SoftNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheCreateParameters CreateParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedsReadComponentMappingRecache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheLayout CacheLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSimCacheFrame> CacheFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FNiagaraVariableBase, UObject*> DataInterfaceStorage;
    
public:
    UNiagaraSimCache();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadIntAttribute(TArray<int32>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCacheValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEmitters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEmitterNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEmitterName(int32 EmitterIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode() const;
    
};


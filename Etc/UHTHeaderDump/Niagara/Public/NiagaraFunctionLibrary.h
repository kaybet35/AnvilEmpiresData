#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FXSystemSpawnParameters -FallbackName=FXSystemSpawnParameters
#include "ENCPoolMethod.h"
#include "NiagaraFunctionLibrary.generated.h"

class AActor;
class UNiagaraComponent;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UNiagaraSystem;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture;
class UTexture2DArray;
class UVolumeTexture;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams);
    
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraComponent* SpawnSystemAtLocation(const UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UVolumeTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureObject(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetTexture2DArrayObject(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UTexture2DArray* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, const TArray<FName>& SamplingRegions);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshDataInterfaceFilteredSockets(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, const TArray<FName>& FilteredSockets);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshDataInterfaceFilteredBones(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, const TArray<FName>& FilteredBones);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetComponentNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject, UPrimitiveComponent* Primitive, int32 CollisionGroup);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActorNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject, AActor* Actor, int32 CollisionGroup);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReleaseNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject, int32 CollisionGroup);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AcquireNiagaraGPURayTracedCollisionGroup(UObject* WorldContextObject);
    
};


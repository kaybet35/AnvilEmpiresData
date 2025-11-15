#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "SkeletalMeshActor.generated.h"

class UMaterialInterface;
class UPhysicsAsset;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ENGINE_API ASkeletalMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDoAnimNotifies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWakeOnLevelStart: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedMesh, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ReplicatedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedPhysAsset, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* ReplicatedPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMaterial0, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReplicatedMaterial0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMaterial1, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReplicatedMaterial1;
    
    ASkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedPhysAsset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMaterial1();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMaterial0();
    
};


#pragma once
#include "CoreMinimal.h"
#include "LightWeightInstanceManager.h"
#include "SMInstanceManager.h"
#include "LightWeightInstanceStaticMeshManager.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class ENGINE_API ALightWeightInstanceStaticMeshManager : public ALightWeightInstanceManager, public ISMInstanceManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaticMesh, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* InstancedStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> RenderingIndicesToDataIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> DataIndicesToRenderingIndices;
    
public:
    ALightWeightInstanceStaticMeshManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StaticMesh();
    

    // Fix for true pure virtual functions not being implemented
};


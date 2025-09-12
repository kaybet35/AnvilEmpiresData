#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisDryingRack.generated.h"

class UDataTable;
class UDryingRackDataComponent;
class UDryingRackProxyComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisDryingRack : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DryingItemMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDryingRackProxyComponent* DryingRackProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDryingRackDataComponent* DryingRackDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DryingRackAssetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> CurrentItemStaticMesh;
    
public:
    AVisDryingRack(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnItemAssetLoaded();
    
};


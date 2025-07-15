#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisDryingRack.generated.h"

class UDryingRackDataComponent;
class UDryingRackProxyComponent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisDryingRack : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DryingItemMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDryingRackProxyComponent* DryingRackProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDryingRackDataComponent* DryingRackDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DryingItemMeshMaterial;
    
public:
    AVisDryingRack(const FObjectInitializer& ObjectInitializer);

};


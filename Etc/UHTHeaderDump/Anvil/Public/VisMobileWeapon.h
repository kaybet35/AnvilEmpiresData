#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisMobileWeapon.generated.h"

class UMountedWeaponDataComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisMobileWeapon : public AVisVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMountedWeaponDataComponent* MountedWeaponDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AmmoMesh;
    
    AVisMobileWeapon(const FObjectInitializer& ObjectInitializer);

};


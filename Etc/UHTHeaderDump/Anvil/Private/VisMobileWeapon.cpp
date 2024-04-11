#include "VisMobileWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=MountedWeaponDataComponent -FallbackName=MountedWeaponDataComponent

AVisMobileWeapon::AVisMobileWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MountedWeaponDataComponent = CreateDefaultSubobject<UMountedWeaponDataComponent>(TEXT("MountedWeaponDataComponent"));
    this->VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
    this->AmmoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AmmoMesh"));
    this->VehicleMesh->SetupAttachment(RootComponent);
    this->AmmoMesh->SetupAttachment(VehicleMesh);
}



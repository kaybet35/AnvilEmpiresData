#ifndef UE4SS_SDK_BPVisHeavyBatteringRam_HPP
#define UE4SS_SDK_BPVisHeavyBatteringRam_HPP

class ABPVisHeavyBatteringRam_C : public AVisVehicle
{
    class UMountedWeaponDataComponent* MountedWeaponData;                             // 0x0500 (size: 0x8)
    class USkeletalMeshComponent* HeavyBatteringRam_Bottom_SK;                        // 0x0508 (size: 0x8)
    class USkeletalMeshComponent* HeavyBatteringRam_Top_SK;                           // 0x0510 (size: 0x8)
    class UStaticMeshComponent* HeavyBatteringRam_SM;                                 // 0x0518 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0520 (size: 0x8)

}; // Size: 0x528

#endif

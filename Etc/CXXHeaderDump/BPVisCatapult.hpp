#ifndef UE4SS_SDK_BPVisCatapult_HPP
#define UE4SS_SDK_BPVisCatapult_HPP

class ABPVisCatapult_C : public AVisVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class USkeletalMeshComponent* Projectile;                                         // 0x0508 (size: 0x8)
    class UMountedWeaponDataComponent* MountedWeaponData;                             // 0x0510 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0518 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCatapult(int32 EntryPoint);
}; // Size: 0x520

#endif

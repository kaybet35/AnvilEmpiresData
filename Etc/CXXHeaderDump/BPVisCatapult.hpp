#ifndef UE4SS_SDK_BPVisCatapult_HPP
#define UE4SS_SDK_BPVisCatapult_HPP

class ABPVisCatapult_C : public AVisVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class USkeletalMeshComponent* Projectile;                                         // 0x04E8 (size: 0x8)
    class UMountedWeaponDataComponent* MountedWeaponData;                             // 0x04F0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04F8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCatapult(int32 EntryPoint);
}; // Size: 0x500

#endif

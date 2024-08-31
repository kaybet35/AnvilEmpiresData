#ifndef UE4SS_SDK_BPVisTorchProjectile_HPP
#define UE4SS_SDK_BPVisTorchProjectile_HPP

class ABPVisTorchProjectile_C : public AVisPickupItem
{
    class UAudioComponent* Audio;                                                     // 0x04C0 (size: 0x8)
    class UNiagaraComponent* TorchFire2;                                              // 0x04C8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

#endif

#ifndef UE4SS_SDK_BPVisTorchProjectile_HPP
#define UE4SS_SDK_BPVisTorchProjectile_HPP

class ABPVisTorchProjectile_C : public AVisPickupItem
{
    class UAudioComponent* Audio;                                                     // 0x0420 (size: 0x8)
    class UNiagaraComponent* TorchFire2;                                              // 0x0428 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0430 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0438 (size: 0x8)

}; // Size: 0x440

#endif

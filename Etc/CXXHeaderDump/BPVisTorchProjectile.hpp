#ifndef UE4SS_SDK_BPVisTorchProjectile_HPP
#define UE4SS_SDK_BPVisTorchProjectile_HPP

class ABPVisTorchProjectile_C : public AVisPickupItem
{
    class UAudioComponent* Audio;                                                     // 0x0468 (size: 0x8)
    class UNiagaraComponent* TorchFire2;                                              // 0x0470 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0478 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0480 (size: 0x8)

}; // Size: 0x488

#endif

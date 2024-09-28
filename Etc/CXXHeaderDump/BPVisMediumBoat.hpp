#ifndef UE4SS_SDK_BPVisMediumBoat_HPP
#define UE4SS_SDK_BPVisMediumBoat_HPP

class ABPVisMediumBoat_C : public AVisBoat
{
    class UNiagaraComponent* WaterStatic;                                             // 0x0528 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0530 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0538 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x0540 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0548 (size: 0x8)

}; // Size: 0x550

#endif

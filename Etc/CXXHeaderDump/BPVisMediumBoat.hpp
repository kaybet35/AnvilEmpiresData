#ifndef UE4SS_SDK_BPVisMediumBoat_HPP
#define UE4SS_SDK_BPVisMediumBoat_HPP

class ABPVisMediumBoat_C : public AVisBoat
{
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0528 (size: 0x8)
    class USkeletalMeshComponent* WindDirectionIndicator;                             // 0x0530 (size: 0x8)
    class USkeletalMeshComponent* Sail_Mesh;                                          // 0x0538 (size: 0x8)
    class UNiagaraComponent* WaterStatic;                                             // 0x0540 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0548 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0550 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x0558 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0560 (size: 0x8)

}; // Size: 0x568

#endif

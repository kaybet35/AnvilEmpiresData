#ifndef UE4SS_SDK_BPVisMediumBoat_HPP
#define UE4SS_SDK_BPVisMediumBoat_HPP

class ABPVisMediumBoat_C : public AVisBoat
{
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* WindDirectionIndicator;                             // 0x0560 (size: 0x8)
    class USkeletalMeshComponent* Sail_Mesh;                                          // 0x0568 (size: 0x8)
    class UNiagaraComponent* WaterStatic;                                             // 0x0570 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0580 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x0588 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0590 (size: 0x8)

}; // Size: 0x598

#endif

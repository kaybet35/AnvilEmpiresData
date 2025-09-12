#ifndef UE4SS_SDK_BPVisMediumBoat_HPP
#define UE4SS_SDK_BPVisMediumBoat_HPP

class ABPVisMediumBoat_C : public AVisBoat
{
    class USkeletalMeshComponent* WindDirectionIndicator1;                            // 0x0588 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0590 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0598 (size: 0x8)
    class UNiagaraComponent* WaterStatic;                                             // 0x05A0 (size: 0x8)
    class USkeletalMeshComponent* Sail_Mesh;                                          // 0x05A8 (size: 0x8)
    class USkeletalMeshComponent* WindDirectionIndicator;                             // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05B8 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x05C0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x05C8 (size: 0x8)

}; // Size: 0x5D0

#endif

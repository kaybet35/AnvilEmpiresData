#ifndef UE4SS_SDK_BPVisSmallBoat_HPP
#define UE4SS_SDK_BPVisSmallBoat_HPP

class ABPVisSmallBoat_C : public AVisBoat
{
    class UInstancedStaticMeshComponent* ResourceFishR3;                              // 0x0540 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR1;                              // 0x0548 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR2;                              // 0x0550 (size: 0x8)
    class UNiagaraComponent* WaterStatic;                                             // 0x0558 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0560 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0568 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x0570 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0578 (size: 0x8)

}; // Size: 0x580

#endif

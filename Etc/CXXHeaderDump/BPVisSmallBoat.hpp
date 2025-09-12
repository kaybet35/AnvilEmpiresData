#ifndef UE4SS_SDK_BPVisSmallBoat_HPP
#define UE4SS_SDK_BPVisSmallBoat_HPP

class ABPVisSmallBoat_C : public AVisBoat
{
    class UInstancedStaticMeshComponent* ResourceFishR3;                              // 0x0588 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR1;                              // 0x0590 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR2;                              // 0x0598 (size: 0x8)
    class UNiagaraComponent* WaterStatic;                                             // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x05A8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x05B0 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x05B8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x05C0 (size: 0x8)

}; // Size: 0x5C8

#endif

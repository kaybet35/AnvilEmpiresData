#ifndef UE4SS_SDK_BPVisSmallBoat_HPP
#define UE4SS_SDK_BPVisSmallBoat_HPP

class ABPVisSmallBoat_C : public AVisVehicle
{
    class UNiagaraComponent* WaterStatic;                                             // 0x0478 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0480 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR1;                              // 0x0488 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0490 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x0498 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x04A0 (size: 0x8)

}; // Size: 0x4A8

#endif

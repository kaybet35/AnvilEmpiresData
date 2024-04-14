#ifndef UE4SS_SDK_BPVisSmallBoat_HPP
#define UE4SS_SDK_BPVisSmallBoat_HPP

class ABPVisSmallBoat_C : public AVisVehicle
{
    class UNiagaraComponent* WaterStatic;                                             // 0x0430 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x0438 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR1;                              // 0x0440 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0448 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0458 (size: 0x8)

}; // Size: 0x460

#endif

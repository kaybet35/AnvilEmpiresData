#ifndef UE4SS_SDK_BPVisSmallBoat_HPP
#define UE4SS_SDK_BPVisSmallBoat_HPP

class ABPVisSmallBoat_C : public AVisVehicle
{
    class UNiagaraComponent* WaterStatic;                                             // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x04E0 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR1;                              // 0x04E8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04F0 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x04F8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0500 (size: 0x8)

}; // Size: 0x508

#endif

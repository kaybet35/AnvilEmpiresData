#ifndef UE4SS_SDK_BPVisMediumBoat_HPP
#define UE4SS_SDK_BPVisMediumBoat_HPP

class ABPVisMediumBoat_C : public AVisVehicle
{
    class UNiagaraComponent* WaterStatic;                                             // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* CullVolume;                                           // 0x04D0 (size: 0x8)
    class UInstancedStaticMeshComponent* ResourceFishR1;                              // 0x04D8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04E0 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x04E8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x04F0 (size: 0x8)

}; // Size: 0x4F8

#endif
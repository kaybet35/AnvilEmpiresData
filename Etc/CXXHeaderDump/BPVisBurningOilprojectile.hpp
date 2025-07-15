#ifndef UE4SS_SDK_BPVisBurningOilprojectile_HPP
#define UE4SS_SDK_BPVisBurningOilprojectile_HPP

class ABPVisBurningOilprojectile_C : public AVisProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04E0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04E8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisBurningOilprojectile(int32 EntryPoint);
}; // Size: 0x4F0

#endif

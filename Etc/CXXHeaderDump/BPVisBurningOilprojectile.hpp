#ifndef UE4SS_SDK_BPVisBurningOilprojectile_HPP
#define UE4SS_SDK_BPVisBurningOilprojectile_HPP

class ABPVisBurningOilprojectile_C : public AVisPickupItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0478 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0480 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisBurningOilprojectile(int32 EntryPoint);
}; // Size: 0x488

#endif

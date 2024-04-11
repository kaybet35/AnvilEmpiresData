#ifndef UE4SS_SDK_BPVisFarmArea_HPP
#define UE4SS_SDK_BPVisFarmArea_HPP

class ABPVisFarmArea_C : public AVisFarm
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UDecalComponent* FertilizerDecal02;                                         // 0x04A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFarmArea(int32 EntryPoint);
}; // Size: 0x4B0

#endif

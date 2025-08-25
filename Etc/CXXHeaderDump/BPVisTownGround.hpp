#ifndef UE4SS_SDK_BPVisTownGround_HPP
#define UE4SS_SDK_BPVisTownGround_HPP

class ABPVisTownGround_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0560 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisTownGround(int32 EntryPoint);
}; // Size: 0x568

#endif

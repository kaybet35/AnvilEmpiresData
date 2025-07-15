#ifndef UE4SS_SDK_BPBasicSS_HPP
#define UE4SS_SDK_BPBasicSS_HPP

class UBPBasicSS_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPBasicSS(int32 EntryPoint);
}; // Size: 0x2A8

#endif

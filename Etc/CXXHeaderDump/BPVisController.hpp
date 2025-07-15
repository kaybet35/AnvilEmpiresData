#ifndef UE4SS_SDK_BPVisController_HPP
#define UE4SS_SDK_BPVisController_HPP

class ABPVisController_C : public AVisController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04D8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisController(int32 EntryPoint);
}; // Size: 0x4E0

#endif

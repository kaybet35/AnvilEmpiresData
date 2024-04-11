#ifndef UE4SS_SDK_BPVisController_HPP
#define UE4SS_SDK_BPVisController_HPP

class ABPVisController_C : public AVisController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0408 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisController(int32 EntryPoint);
}; // Size: 0x410

#endif

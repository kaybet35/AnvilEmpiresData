#ifndef UE4SS_SDK_VisBloodSplatter_HPP
#define UE4SS_SDK_VisBloodSplatter_HPP

class AVisBloodSplatter_C : public AVisActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0458 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0460 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VisBloodSplatter(int32 EntryPoint);
}; // Size: 0x468

#endif

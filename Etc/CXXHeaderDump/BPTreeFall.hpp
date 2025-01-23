#ifndef UE4SS_SDK_BPTreeFall_HPP
#define UE4SS_SDK_BPTreeFall_HPP

class ABPTreeFall_C : public AVisActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* Top;                                                  // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Stump;                                                // 0x04B0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04C0 (size: 0x8)
    class UCurveFloat* Curve;                                                         // 0x04C8 (size: 0x8)
    double TreeFall;                                                                  // 0x04D0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPTreeFall(int32 EntryPoint);
}; // Size: 0x4D8

#endif

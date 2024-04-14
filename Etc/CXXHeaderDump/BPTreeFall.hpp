#ifndef UE4SS_SDK_BPTreeFall_HPP
#define UE4SS_SDK_BPTreeFall_HPP

class ABPTreeFall_C : public AVisActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Top;                                                  // 0x0458 (size: 0x8)
    class UStaticMeshComponent* Stump;                                                // 0x0460 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0468 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0470 (size: 0x8)
    class UCurveFloat* Curve;                                                         // 0x0478 (size: 0x8)
    double TreeFall;                                                                  // 0x0480 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPTreeFall(int32 EntryPoint);
}; // Size: 0x488

#endif

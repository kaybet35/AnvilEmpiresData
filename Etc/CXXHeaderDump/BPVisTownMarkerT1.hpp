#ifndef UE4SS_SDK_BPVisTownMarkerT1_HPP
#define UE4SS_SDK_BPVisTownMarkerT1_HPP

class ABPVisTownMarkerT1_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0488 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0490 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal1;                  // 0x0498 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x04A8 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x04B0 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisTownMarkerT1(int32 EntryPoint);
}; // Size: 0x4B1

#endif

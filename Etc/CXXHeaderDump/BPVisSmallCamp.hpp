#ifndef UE4SS_SDK_BPVisSmallCamp_HPP
#define UE4SS_SDK_BPVisSmallCamp_HPP

class ABPVisSmallCamp_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0548 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh4;                                    // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0560 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x0568 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisSmallCamp(int32 EntryPoint);
}; // Size: 0x570

#endif

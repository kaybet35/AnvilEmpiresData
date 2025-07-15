#ifndef UE4SS_SDK_BPVisSmallCamp_HPP
#define UE4SS_SDK_BPVisSmallCamp_HPP

class ABPVisSmallCamp_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh4;                                    // 0x0578 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0580 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x0588 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisSmallCamp(int32 EntryPoint);
}; // Size: 0x590

#endif

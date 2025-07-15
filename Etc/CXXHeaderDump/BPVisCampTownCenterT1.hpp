#ifndef UE4SS_SDK_BPVisCampTownCenterT1_HPP
#define UE4SS_SDK_BPVisCampTownCenterT1_HPP

class ABPVisCampTownCenterT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0578 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCampTownCenterT1(int32 EntryPoint);
}; // Size: 0x580

#endif

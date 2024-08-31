#ifndef UE4SS_SDK_BPVisCampTownCenterT1_HPP
#define UE4SS_SDK_BPVisCampTownCenterT1_HPP

class ABPVisCampTownCenterT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0530 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0538 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0540 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0548 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0550 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0558 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0560 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0570 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCampTownCenterT1(int32 EntryPoint);
}; // Size: 0x578

#endif

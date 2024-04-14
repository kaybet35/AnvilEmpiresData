#ifndef UE4SS_SDK_BPVisCampTownCenterT1_HPP
#define UE4SS_SDK_BPVisCampTownCenterT1_HPP

class ABPVisCampTownCenterT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x04D8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x04E0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x04E8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x04F0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x04F8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0500 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0508 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0518 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x0520 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCampTownCenterT1(int32 EntryPoint);
}; // Size: 0x528

#endif

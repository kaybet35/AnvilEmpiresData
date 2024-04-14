#ifndef UE4SS_SDK_BPVisCampTownCenterT1_HPP
#define UE4SS_SDK_BPVisCampTownCenterT1_HPP

class ABPVisCampTownCenterT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0490 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0498 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x04A0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x04A8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x04B0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x04B8 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x04C0 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04C8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04D0 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x04D8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCampTownCenterT1(int32 EntryPoint);
}; // Size: 0x4E0

#endif

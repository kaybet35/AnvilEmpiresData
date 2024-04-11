#ifndef UE4SS_SDK_BPVisSmallCamp_HPP
#define UE4SS_SDK_BPVisSmallCamp_HPP

class ABPVisSmallCamp_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0498 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh4;                                    // 0x04A0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x04A8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x04B0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x04B8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x04C0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x04C8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x04D0 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x04D8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04E0 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x04E8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisSmallCamp(int32 EntryPoint);
}; // Size: 0x4F0

#endif

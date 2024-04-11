#ifndef UE4SS_SDK_BPVisMineralRefineryT3_HPP
#define UE4SS_SDK_BPVisMineralRefineryT3_HPP

class ABPVisMineralRefineryT3_C : public AVisRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh7;                                    // 0x0498 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh6;                                    // 0x04A0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x04A8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04B0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04B8 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x04C0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh5;                                    // 0x04C8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh4;                                    // 0x04D0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh3;                                    // 0x04D8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x04E0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x04E8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04F8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0500 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect9;                                      // 0x0508 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0510 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0518 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0520 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0528 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect3;                                      // 0x0530 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0538 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0540 (size: 0x8)
    class USceneComponent* Refining;                                                  // 0x0548 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisMineralRefineryT3(int32 EntryPoint);
}; // Size: 0x550

#endif

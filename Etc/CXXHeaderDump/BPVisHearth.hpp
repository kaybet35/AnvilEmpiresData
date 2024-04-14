#ifndef UE4SS_SDK_BPVisHearth_HPP
#define UE4SS_SDK_BPVisHearth_HPP

class ABPVisHearth_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)
    class UAudioComponent* PotBubbling;                                               // 0x0520 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0528 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x0530 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x0538 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* FireWood;                                          // 0x0548 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0558 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0560 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0568 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0570 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0578 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0580 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0588 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0598 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisHearth(int32 EntryPoint);
}; // Size: 0x5A0

#endif

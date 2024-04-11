#ifndef UE4SS_SDK_BPVisHearth_HPP
#define UE4SS_SDK_BPVisHearth_HPP

class ABPVisHearth_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UAudioComponent* PotBubbling;                                               // 0x04D8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x04E0 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x04E8 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x04F0 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* FireWood;                                          // 0x0500 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0510 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0518 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0520 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0528 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0530 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0538 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0540 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0550 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisHearth(int32 EntryPoint);
}; // Size: 0x558

#endif

#ifndef UE4SS_SDK_BPVisOven_HPP
#define UE4SS_SDK_BPVisOven_HPP

class ABPVisOven_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UNiagaraComponent* OvenBurningFront;                                        // 0x04D8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x04E0 (size: 0x8)
    class UNiagaraComponent* OvenFueledSparks;                                        // 0x04E8 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x04F0 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x04F8 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x0518 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0520 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0528 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0530 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0538 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0540 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0548 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0550 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0560 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisOven(int32 EntryPoint);
}; // Size: 0x568

#endif

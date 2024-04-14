#ifndef UE4SS_SDK_BPVisOven_HPP
#define UE4SS_SDK_BPVisOven_HPP

class ABPVisOven_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)
    class UNiagaraComponent* OvenBurningFront;                                        // 0x0520 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0528 (size: 0x8)
    class UNiagaraComponent* OvenFueledSparks;                                        // 0x0530 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x0538 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x0540 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x0560 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0568 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0570 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0578 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0580 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0588 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x0590 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0598 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x05A0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisOven(int32 EntryPoint);
}; // Size: 0x5B0

#endif

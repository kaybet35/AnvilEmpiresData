#ifndef UE4SS_SDK_BPVisFirepitT1_HPP
#define UE4SS_SDK_BPVisFirepitT1_HPP

class ABPVisFirepitT1_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0520 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x0528 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x0530 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0558 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x0560 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFirepitT1(int32 EntryPoint);
}; // Size: 0x568

#endif

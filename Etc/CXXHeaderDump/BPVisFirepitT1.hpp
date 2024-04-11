#ifndef UE4SS_SDK_BPVisFirepitT1_HPP
#define UE4SS_SDK_BPVisFirepitT1_HPP

class ABPVisFirepitT1_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x04D8 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x04E0 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x04E8 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0510 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x0518 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFirepitT1(int32 EntryPoint);
}; // Size: 0x520

#endif

#ifndef UE4SS_SDK_BPVisFirepitT1_HPP
#define UE4SS_SDK_BPVisFirepitT1_HPP

class ABPVisFirepitT1_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0600 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x0608 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x0610 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0618 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x0620 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0628 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0630 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0638 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x0640 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFirepitT1(int32 EntryPoint);
}; // Size: 0x648

#endif

#ifndef UE4SS_SDK_BPVisFirepitT1_HPP
#define UE4SS_SDK_BPVisFirepitT1_HPP

class ABPVisFirepitT1_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x05B8 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x05C0 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x05C8 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x05D0 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x05D8 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x05E0 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x05E8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05F0 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x05F8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFirepitT1(int32 EntryPoint);
}; // Size: 0x600

#endif

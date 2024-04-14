#ifndef UE4SS_SDK_BPVisFirepitT1_HPP
#define UE4SS_SDK_BPVisFirepitT1_HPP

class ABPVisFirepitT1_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0570 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x0578 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x0580 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x05A0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05A8 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x05B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFirepitT1(int32 EntryPoint);
}; // Size: 0x5B8

#endif

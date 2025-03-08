#ifndef UE4SS_SDK_BPVisOven_HPP
#define UE4SS_SDK_BPVisOven_HPP

class ABPVisOven_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B8 (size: 0x8)
    class UNiagaraComponent* OvenBurningFront;                                        // 0x05C0 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x05C8 (size: 0x8)
    class UNiagaraComponent* OvenFueledSparks;                                        // 0x05D0 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x05D8 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x05E0 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x05E8 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x05F0 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x05F8 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets1;                                   // 0x0600 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0608 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0610 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0618 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisOven(int32 EntryPoint);
}; // Size: 0x620

#endif

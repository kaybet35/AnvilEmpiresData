#ifndef UE4SS_SDK_BPVisHearth_HPP
#define UE4SS_SDK_BPVisHearth_HPP

class ABPVisHearth_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)
    class UAudioComponent* PotBubbling;                                               // 0x05D8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x05E0 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x05E8 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x05F0 (size: 0x8)
    class UAudioComponent* Campfire_Cue;                                              // 0x05F8 (size: 0x8)
    class UVisStaticMeshComponent* FireWood;                                          // 0x0600 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0608 (size: 0x8)
    class UVisStaticMeshComponent* RefiningAssets;                                    // 0x0610 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0618 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0620 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisHearth(int32 EntryPoint);
}; // Size: 0x628

#endif

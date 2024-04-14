#ifndef UE4SS_SDK_BPVisTempleT3_HPP
#define UE4SS_SDK_BPVisTempleT3_HPP

class ABPVisTempleT3_C : public AVisRelicTechCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04D8 (size: 0x8)
    class UVisStaticMeshComponent* Populate1;                                         // 0x04E0 (size: 0x8)
    class UVisStaticMeshComponent* VisRoof;                                           // 0x04E8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04F0 (size: 0x8)
    class UNiagaraComponent* SmokeStack2;                                             // 0x04F8 (size: 0x8)
    class UNiagaraComponent* SmokeStack3;                                             // 0x0500 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0508 (size: 0x8)
    class UNiagaraComponent* SmokeStack1;                                             // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* Populate;                                          // 0x0518 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0520 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0528 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisTempleT3(int32 EntryPoint);
}; // Size: 0x530

#endif

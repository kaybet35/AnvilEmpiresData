#ifndef UE4SS_SDK_BPVisTempleT3_HPP
#define UE4SS_SDK_BPVisTempleT3_HPP

class ABPVisTempleT3_C : public AVisRelicTechCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0490 (size: 0x8)
    class UVisStaticMeshComponent* Populate1;                                         // 0x0498 (size: 0x8)
    class UVisStaticMeshComponent* VisRoof;                                           // 0x04A0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04A8 (size: 0x8)
    class UNiagaraComponent* SmokeStack2;                                             // 0x04B0 (size: 0x8)
    class UNiagaraComponent* SmokeStack3;                                             // 0x04B8 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x04C0 (size: 0x8)
    class UNiagaraComponent* SmokeStack1;                                             // 0x04C8 (size: 0x8)
    class UVisStaticMeshComponent* Populate;                                          // 0x04D0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04D8 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x04E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisTempleT3(int32 EntryPoint);
}; // Size: 0x4E8

#endif

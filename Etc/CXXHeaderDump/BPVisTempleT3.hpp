#ifndef UE4SS_SDK_BPVisTempleT3_HPP
#define UE4SS_SDK_BPVisTempleT3_HPP

class ABPVisTempleT3_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x0540 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* Populate1;                                         // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* VisRoof;                                           // 0x0558 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0560 (size: 0x8)
    class UNiagaraComponent* SmokeStack2;                                             // 0x0568 (size: 0x8)
    class UNiagaraComponent* SmokeStack3;                                             // 0x0570 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0578 (size: 0x8)
    class UNiagaraComponent* SmokeStack1;                                             // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* Populate;                                          // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0590 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0598 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisTempleT3(int32 EntryPoint);
}; // Size: 0x5A0

#endif

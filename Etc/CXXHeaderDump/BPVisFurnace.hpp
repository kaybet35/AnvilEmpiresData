#ifndef UE4SS_SDK_BPVisFurnace_HPP
#define UE4SS_SDK_BPVisFurnace_HPP

class ABPVisFurnace_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x05B8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x05C0 (size: 0x8)
    class UAudioComponent* CookingSFX;                                                // 0x05C8 (size: 0x8)
    class UAudioComponent* FueledSFX;                                                 // 0x05D0 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x05D8 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x05E0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05E8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFurnace(int32 EntryPoint);
}; // Size: 0x5F0

#endif

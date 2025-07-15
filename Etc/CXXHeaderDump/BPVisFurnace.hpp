#ifndef UE4SS_SDK_BPVisFurnace_HPP
#define UE4SS_SDK_BPVisFurnace_HPP

class ABPVisFurnace_C : public AVisCookingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x05F8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x0600 (size: 0x8)
    class UAudioComponent* CookingSFX;                                                // 0x0608 (size: 0x8)
    class UAudioComponent* FueledSFX;                                                 // 0x0610 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0618 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x0620 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0628 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFurnace(int32 EntryPoint);
}; // Size: 0x630

#endif

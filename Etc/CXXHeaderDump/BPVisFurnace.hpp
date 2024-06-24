#ifndef UE4SS_SDK_BPVisFurnace_HPP
#define UE4SS_SDK_BPVisFurnace_HPP

class ABPVisFurnace_C : public AVisCookingStructure
{
    class UAudioComponent* CookingSFX;                                                // 0x0568 (size: 0x8)
    class UAudioComponent* FueledSFX;                                                 // 0x0570 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0578 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0588 (size: 0x8)

}; // Size: 0x590

#endif

#ifndef UE4SS_SDK_BPVisFurnace_HPP
#define UE4SS_SDK_BPVisFurnace_HPP

class ABPVisFurnace_C : public AVisCookingStructure
{
    class UNiagaraComponent* Refining;                                                // 0x0518 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x0520 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0528 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0530 (size: 0x8)

}; // Size: 0x538

#endif

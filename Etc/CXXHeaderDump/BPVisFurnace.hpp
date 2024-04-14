#ifndef UE4SS_SDK_BPVisFurnace_HPP
#define UE4SS_SDK_BPVisFurnace_HPP

class ABPVisFurnace_C : public AVisCookingStructure
{
    class UNiagaraComponent* Refining;                                                // 0x0560 (size: 0x8)
    class UNiagaraComponent* Fueled;                                                  // 0x0568 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0578 (size: 0x8)

}; // Size: 0x580

#endif

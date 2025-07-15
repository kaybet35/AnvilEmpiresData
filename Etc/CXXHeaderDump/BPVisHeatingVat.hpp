#ifndef UE4SS_SDK_BPVisHeatingVat_HPP
#define UE4SS_SDK_BPVisHeatingVat_HPP

class ABPVisHeatingVat_C : public AVisCookingStructure
{
    class UNiagaraComponent* Burning;                                                 // 0x05F0 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x05F8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0600 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0608 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0610 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0618 (size: 0x8)

}; // Size: 0x620

#endif

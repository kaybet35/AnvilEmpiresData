#ifndef UE4SS_SDK_BPVisHeatingVat_HPP
#define UE4SS_SDK_BPVisHeatingVat_HPP

class ABPVisHeatingVat_C : public AVisCookingStructure
{
    class UNiagaraComponent* Burning;                                                 // 0x0568 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x0570 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x0578 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0590 (size: 0x8)

}; // Size: 0x598

#endif

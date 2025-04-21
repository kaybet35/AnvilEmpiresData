#ifndef UE4SS_SDK_BPVisHeatingVat_HPP
#define UE4SS_SDK_BPVisHeatingVat_HPP

class ABPVisHeatingVat_C : public AVisCookingStructure
{
    class UNiagaraComponent* Burning;                                                 // 0x05D0 (size: 0x8)
    class UNiagaraComponent* Fuelled;                                                 // 0x05D8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x05E0 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x05E8 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x05F0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05F8 (size: 0x8)

}; // Size: 0x600

#endif

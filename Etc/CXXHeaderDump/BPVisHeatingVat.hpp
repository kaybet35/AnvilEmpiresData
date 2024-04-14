#ifndef UE4SS_SDK_BPVisHeatingVat_HPP
#define UE4SS_SDK_BPVisHeatingVat_HPP

class ABPVisHeatingVat_C : public AVisCraftingStructure
{
    class UNiagaraComponent* Fuelled;                                                 // 0x04D0 (size: 0x8)
    class UNiagaraComponent* Burning;                                                 // 0x04D8 (size: 0x8)
    class UNiagaraComponent* Refining;                                                // 0x04E0 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* PopulatedAssets;                                   // 0x04F0 (size: 0x8)
    class UVisInstancedStockpileComponent* ResourceWater;                             // 0x04F8 (size: 0x8)
    class UVisInstancedStockpileComponent* VisInstancedStockpile;                     // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0508 (size: 0x8)

}; // Size: 0x510

#endif

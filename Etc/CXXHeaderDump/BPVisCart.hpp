#ifndef UE4SS_SDK_BPVisCart_HPP
#define UE4SS_SDK_BPVisCart_HPP

class ABPVisCart_C : public AVisCart
{
    class UNiagaraComponent* Niagara;                                                 // 0x0500 (size: 0x8)
    class UVisPointLightComponent* VisPointLight;                                     // 0x0508 (size: 0x8)
    class USkeletalMeshComponent* SK_Torch;                                           // 0x0510 (size: 0x8)
    class UEntityAttachableDataComponent* EntityAttachableData;                       // 0x0518 (size: 0x8)
    class UVisMultiItemStockpileComponent* VisMultiItemStockpile;                     // 0x0520 (size: 0x8)
    class USkeletalMeshComponent* CartMesh;                                           // 0x0528 (size: 0x8)

}; // Size: 0x530

#endif

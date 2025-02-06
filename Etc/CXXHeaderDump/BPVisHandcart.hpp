#ifndef UE4SS_SDK_BPVisHandcart_HPP
#define UE4SS_SDK_BPVisHandcart_HPP

class ABPVisHandcart_C : public AVisCart
{
    class UVisPointLightComponent* VisPointLight;                                     // 0x04E0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x04E8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x04F0 (size: 0x8)
    class USkeletalMeshComponent* SK_Torch;                                           // 0x04F8 (size: 0x8)
    class UVisMultiItemStockpileComponent* VisMultiItemStockpile;                     // 0x0500 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0508 (size: 0x8)

}; // Size: 0x510

#endif

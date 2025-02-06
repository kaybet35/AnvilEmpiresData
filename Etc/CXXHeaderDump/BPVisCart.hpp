#ifndef UE4SS_SDK_BPVisCart_HPP
#define UE4SS_SDK_BPVisCart_HPP

class ABPVisCart_C : public AVisCart
{
    class UVisPointLightComponent* VisPointLight;                                     // 0x04E0 (size: 0x8)
    class USkeletalMeshComponent* SK_Torch;                                           // 0x04E8 (size: 0x8)
    class UEntityAttachableDataComponent* EntityAttachableData;                       // 0x04F0 (size: 0x8)
    class UVisMultiItemStockpileComponent* VisMultiItemStockpile;                     // 0x04F8 (size: 0x8)
    class USkeletalMeshComponent* CartMesh;                                           // 0x0500 (size: 0x8)

}; // Size: 0x508

#endif

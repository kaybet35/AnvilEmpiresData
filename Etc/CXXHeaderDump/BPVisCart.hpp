#ifndef UE4SS_SDK_BPVisCart_HPP
#define UE4SS_SDK_BPVisCart_HPP

class ABPVisCart_C : public AVisVehicle
{
    class UEntityAttachableDataComponent* EntityAttachableData;                       // 0x04C8 (size: 0x8)
    class UVisMultiItemStockpileComponent* VisMultiItemStockpile;                     // 0x04D0 (size: 0x8)
    class USkeletalMeshComponent* CartMesh;                                           // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

#endif

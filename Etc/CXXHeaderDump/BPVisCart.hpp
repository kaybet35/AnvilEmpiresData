#ifndef UE4SS_SDK_BPVisCart_HPP
#define UE4SS_SDK_BPVisCart_HPP

class ABPVisCart_C : public AVisVehicle
{
    class UEntityAttachableDataComponent* EntityAttachableData;                       // 0x0418 (size: 0x8)
    class UVisMultiItemStockpileComponent* VisMultiItemStockpile;                     // 0x0420 (size: 0x8)
    class USkeletalMeshComponent* CartMesh;                                           // 0x0428 (size: 0x8)

}; // Size: 0x430

#endif

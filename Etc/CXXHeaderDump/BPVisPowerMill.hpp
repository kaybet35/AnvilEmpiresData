#ifndef UE4SS_SDK_BPVisPowerMill_HPP
#define UE4SS_SDK_BPVisPowerMill_HPP

class ABPVisPowerMill_C : public AVisPowerMill
{
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0568 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0570 (size: 0x8)

}; // Size: 0x578

#endif

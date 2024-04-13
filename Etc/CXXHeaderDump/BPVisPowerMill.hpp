#ifndef UE4SS_SDK_BPVisPowerMill_HPP
#define UE4SS_SDK_BPVisPowerMill_HPP

class ABPVisPowerMill_C : public AVisPowerMill
{
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0518 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0520 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0528 (size: 0x8)

}; // Size: 0x530

#endif

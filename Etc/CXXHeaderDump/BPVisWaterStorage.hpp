#ifndef UE4SS_SDK_BPVisWaterStorage_HPP
#define UE4SS_SDK_BPVisWaterStorage_HPP

class ABPVisWaterStorage_C : public AVisStructure
{
    class UBPFoliageCullStaticMeshComponent_C* BPFoliageCullStaticMeshComponent;      // 0x0560 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0568 (size: 0x8)
    class UStaticMeshComponent* WaterNode;                                            // 0x0570 (size: 0x8)
    class UStaticMeshComponent* StartStraightMesh;                                    // 0x0578 (size: 0x8)
    class UStaticMeshComponent* PoolWater;                                            // 0x0580 (size: 0x8)
    class UVisCanalWaterControllerComponent* PoolWaterLevel;                          // 0x0588 (size: 0x8)
    class UVisCanalWaterControllerComponent* CanalWaterLevel;                         // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* AngleBase;                                         // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x05A0 (size: 0x8)
    class UVisStaticMeshComponent* AngleTrimRight;                                    // 0x05A8 (size: 0x8)
    class UVisStaticMeshComponent* AngleTrimLeft;                                     // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* AdapterStart;                                         // 0x05C0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x05C8 (size: 0x8)
    class UVisStaticMeshComponent* Pool;                                              // 0x05D0 (size: 0x8)
    class USceneComponent* Base;                                                      // 0x05D8 (size: 0x8)

}; // Size: 0x5E0

#endif

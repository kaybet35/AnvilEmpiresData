#ifndef UE4SS_SDK_BPVisWaterStorage_HPP
#define UE4SS_SDK_BPVisWaterStorage_HPP

class ABPVisWaterStorage_C : public AVisStructure
{
    class UStaticMeshComponent* LandscapeCullBalljointMid1;                           // 0x0518 (size: 0x8)
    class UStaticMeshComponent* WaterNode;                                            // 0x0520 (size: 0x8)
    class UStaticMeshComponent* StartStraightMesh;                                    // 0x0528 (size: 0x8)
    class UStaticMeshComponent* PoolWater;                                            // 0x0530 (size: 0x8)
    class UVisCanalWaterControllerComponent* PoolWaterLevel;                          // 0x0538 (size: 0x8)
    class UVisCanalWaterControllerComponent* CanalWaterLevel;                         // 0x0540 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointMid;                            // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* AngleBase;                                         // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* AngleTrimRight;                                    // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* AngleTrimLeft;                                     // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0570 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointStart;                          // 0x0578 (size: 0x8)
    class UStaticMeshComponent* AdapterStart;                                         // 0x0580 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* Pool;                                              // 0x0590 (size: 0x8)
    class USceneComponent* Base;                                                      // 0x0598 (size: 0x8)

}; // Size: 0x5A0

#endif

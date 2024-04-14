#ifndef UE4SS_SDK_BPVisWaterStorage_HPP
#define UE4SS_SDK_BPVisWaterStorage_HPP

class ABPVisWaterStorage_C : public AVisStructure
{
    class UStaticMeshComponent* LandscapeCullBalljointMid1;                           // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* WaterNode;                                            // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* StartStraightMesh;                                    // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* PoolWater;                                            // 0x04E0 (size: 0x8)
    class UVisCanalWaterControllerComponent* PoolWaterLevel;                          // 0x04E8 (size: 0x8)
    class UVisCanalWaterControllerComponent* CanalWaterLevel;                         // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointMid;                            // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* AngleBase;                                         // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* AngleTrimRight;                                    // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* AngleTrimLeft;                                     // 0x0518 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0520 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointStart;                          // 0x0528 (size: 0x8)
    class UStaticMeshComponent* AdapterStart;                                         // 0x0530 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* Pool;                                              // 0x0540 (size: 0x8)
    class USceneComponent* Base;                                                      // 0x0548 (size: 0x8)

}; // Size: 0x550

#endif

#ifndef UE4SS_SDK_BPVisAqueductStraight_HPP
#define UE4SS_SDK_BPVisAqueductStraight_HPP

class ABPVisAqueductStraight_C : public AVisStructure
{
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0480 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim;                                         // 0x0488 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim;                                          // 0x0490 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0498 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x04A0 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim1;                                        // 0x04A8 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase1;                                    // 0x04B0 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim1;                                    // 0x04B8 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim1;                                         // 0x04C0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x04E0 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04F0 (size: 0x8)

}; // Size: 0x4F8

#endif

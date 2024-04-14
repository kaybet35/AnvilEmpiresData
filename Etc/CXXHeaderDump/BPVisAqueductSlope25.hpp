#ifndef UE4SS_SDK_BPVisAqueductSlope25_HPP
#define UE4SS_SDK_BPVisAqueductSlope25_HPP

class ABPVisAqueductSlope25_C : public AVisStructure
{
    class UVisStaticMeshComponent* RightTrim1;                                        // 0x04C8 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim1;                                         // 0x04D0 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim1;                                    // 0x04D8 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase1;                                    // 0x04E0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim;                                         // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim;                                          // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0508 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x0510 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x0518 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0520 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x0528 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0530 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0538 (size: 0x8)

}; // Size: 0x540

#endif

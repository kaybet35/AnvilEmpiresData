#ifndef UE4SS_SDK_BPVisAqueductStraight_HPP
#define UE4SS_SDK_BPVisAqueductStraight_HPP

class ABPVisAqueductStraight_C : public AVisStructure
{
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0518 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim;                                         // 0x0520 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim;                                          // 0x0528 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0530 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim1;                                        // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase1;                                    // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim1;                                    // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim1;                                         // 0x0558 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x0560 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x0568 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x0570 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0578 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0588 (size: 0x8)

}; // Size: 0x590

#endif

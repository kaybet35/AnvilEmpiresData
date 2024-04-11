#ifndef UE4SS_SDK_BPVisAqueductSlope25_HPP
#define UE4SS_SDK_BPVisAqueductSlope25_HPP

class ABPVisAqueductSlope25_C : public AVisStructure
{
    class UStaticMeshComponent* EndMesh;                                              // 0x0480 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0488 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x0490 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0498 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x04A0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x04A8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04B0 (size: 0x8)

}; // Size: 0x4B8

#endif

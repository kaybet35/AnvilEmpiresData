#ifndef UE4SS_SDK_BPVisCanal_HPP
#define UE4SS_SDK_BPVisCanal_HPP

class ABPVisCanal_C : public AVisSpline
{
    class UStaticMeshComponent* MidMesh;                                              // 0x0490 (size: 0x8)
    class USceneComponent* EndNodeBase;                                               // 0x0498 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x04A0 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x04B0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x04B8 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x04C0 (size: 0x8)

}; // Size: 0x4C8

#endif

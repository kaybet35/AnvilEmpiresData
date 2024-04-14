#ifndef UE4SS_SDK_BPVisCanal_HPP
#define UE4SS_SDK_BPVisCanal_HPP

class ABPVisCanal_C : public AVisSpline
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointMid;                            // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointEnd;                            // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointStart;                          // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* BalljointTrimEnd;                                     // 0x04F8 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseEnd;                                     // 0x0500 (size: 0x8)
    class UStaticMeshComponent* AdapterEnd;                                           // 0x0508 (size: 0x8)
    class UStaticMeshComponent* AngleTrimRightEnd;                                    // 0x0510 (size: 0x8)
    class UStaticMeshComponent* AngleTrimLeftEnd;                                     // 0x0518 (size: 0x8)
    class UStaticMeshComponent* AngleBaseEnd;                                         // 0x0520 (size: 0x8)
    class USceneComponent* OffsetBase;                                                // 0x0528 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x0530 (size: 0x8)
    class UStaticMeshComponent* AdapterStart;                                         // 0x0538 (size: 0x8)
    class UStaticMeshComponent* AngleTrimRightStart;                                  // 0x0540 (size: 0x8)
    class UStaticMeshComponent* AngleTrimLeftStart;                                   // 0x0548 (size: 0x8)
    class UStaticMeshComponent* AngleBaseStart;                                       // 0x0550 (size: 0x8)
    class UStaticMeshComponent* BalljointTrimStart;                                   // 0x0558 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseStart;                                   // 0x0560 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x0568 (size: 0x8)
    class UStaticMeshComponent* EndStraightMesh;                                      // 0x0570 (size: 0x8)
    class UStaticMeshComponent* StartStraightMesh;                                    // 0x0578 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0580 (size: 0x8)
    class USceneComponent* EndNodeBase;                                               // 0x0588 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x0590 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0598 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x05A0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCanal(int32 EntryPoint);
}; // Size: 0x5A8

#endif

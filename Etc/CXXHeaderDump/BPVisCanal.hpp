#ifndef UE4SS_SDK_BPVisCanal_HPP
#define UE4SS_SDK_BPVisCanal_HPP

class ABPVisCanal_C : public AVisSpline
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0548 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointMid;                            // 0x0550 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointEnd;                            // 0x0558 (size: 0x8)
    class UStaticMeshComponent* LandscapeCullBalljointStart;                          // 0x0560 (size: 0x8)
    class UStaticMeshComponent* BalljointTrimEnd;                                     // 0x0568 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseEnd;                                     // 0x0570 (size: 0x8)
    class UStaticMeshComponent* AdapterEnd;                                           // 0x0578 (size: 0x8)
    class UStaticMeshComponent* AngleTrimRightEnd;                                    // 0x0580 (size: 0x8)
    class UStaticMeshComponent* AngleTrimLeftEnd;                                     // 0x0588 (size: 0x8)
    class UStaticMeshComponent* AngleBaseEnd;                                         // 0x0590 (size: 0x8)
    class USceneComponent* OffsetBase;                                                // 0x0598 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* AdapterStart;                                         // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* AngleTrimRightStart;                                  // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* AngleTrimLeftStart;                                   // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* AngleBaseStart;                                       // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* BalljointTrimStart;                                   // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseStart;                                   // 0x05D0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* EndStraightMesh;                                      // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* StartStraightMesh;                                    // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x05F0 (size: 0x8)
    class USceneComponent* EndNodeBase;                                               // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x0600 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0608 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x0610 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisCanal(int32 EntryPoint);
}; // Size: 0x618

#endif

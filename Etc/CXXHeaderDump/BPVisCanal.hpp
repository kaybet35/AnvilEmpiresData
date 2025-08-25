#ifndef UE4SS_SDK_BPVisCanal_HPP
#define UE4SS_SDK_BPVisCanal_HPP

class ABPVisCanal_C : public AVisSpline
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    class UBPFoliageCullStaticMeshComponent_C* FoliageCullBalljointStart;             // 0x0578 (size: 0x8)
    class UBPFoliageCullStaticMeshComponent_C* FoliageCullBalljointEnd;               // 0x0580 (size: 0x8)
    class UBPFoliageCullStaticMeshComponent_C* FoliageCullBalljointMid;               // 0x0588 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* LandscapeCullBalljointEnd;           // 0x0590 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* LandscapeCullBalljointStart;         // 0x0598 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* LandscapeCullBalljointMid;           // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* BalljointTrimEnd;                                     // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseEnd;                                     // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* AdapterEnd;                                           // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* AngleTrimRightEnd;                                    // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* AngleTrimLeftEnd;                                     // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* AngleBaseEnd;                                         // 0x05D0 (size: 0x8)
    class USceneComponent* OffsetBase;                                                // 0x05D8 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* AdapterStart;                                         // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* AngleTrimRightStart;                                  // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* AngleTrimLeftStart;                                   // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* AngleBaseStart;                                       // 0x0600 (size: 0x8)
    class UStaticMeshComponent* BalljointTrimStart;                                   // 0x0608 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseStart;                                   // 0x0610 (size: 0x8)
    class UVisBalljointComponent* VisBalljointStart;                                  // 0x0618 (size: 0x8)
    class UStaticMeshComponent* EndStraightMesh;                                      // 0x0620 (size: 0x8)
    class UStaticMeshComponent* StartStraightMesh;                                    // 0x0628 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0630 (size: 0x8)
    class USceneComponent* EndNodeBase;                                               // 0x0638 (size: 0x8)
    class UStaticMeshComponent* StartMesh;                                            // 0x0640 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0648 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x0650 (size: 0x8)

    void ReceiveBeginPlay();
    void OnShapeUpdated_Event(const class USplineDataComponent* SplineDataComponent);
    void ExecuteUbergraph_BPVisCanal(int32 EntryPoint);
}; // Size: 0x658

#endif

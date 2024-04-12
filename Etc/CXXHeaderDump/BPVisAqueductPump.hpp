#ifndef UE4SS_SDK_BPVisAqueductPump_HPP
#define UE4SS_SDK_BPVisAqueductPump_HPP

class ABPVisAqueductPump_C : public AVisStructure
{
    class UNiagaraComponent* Niagara;                                                 // 0x0480 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x0488 (size: 0x8)
    class UStaticMeshComponent* IndustryAqueduct_WaterPump_WaterFall;                 // 0x0490 (size: 0x8)
    class UStaticMeshComponent* WaterFall;                                            // 0x0498 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04A0 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim;                                         // 0x04A8 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim;                                          // 0x04B0 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x04B8 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x04C0 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x04D8 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x04E0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04E8 (size: 0x8)

}; // Size: 0x4F0

#endif

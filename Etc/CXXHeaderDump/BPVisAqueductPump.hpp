#ifndef UE4SS_SDK_BPVisAqueductPump_HPP
#define UE4SS_SDK_BPVisAqueductPump_HPP

class ABPVisAqueductPump_C : public AVisStructure
{
    class UNiagaraComponent* Niagara;                                                 // 0x04C8 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* IndustryAqueduct_WaterPump_WaterFall;                 // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* WaterFall;                                            // 0x04E0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim;                                         // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim;                                          // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0508 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x0510 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x0518 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0520 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0528 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0530 (size: 0x8)

}; // Size: 0x538

#endif

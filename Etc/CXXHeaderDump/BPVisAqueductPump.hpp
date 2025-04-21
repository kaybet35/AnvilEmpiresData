#ifndef UE4SS_SDK_BPVisAqueductPump_HPP
#define UE4SS_SDK_BPVisAqueductPump_HPP

class ABPVisAqueductPump_C : public AVisStructure
{
    class UNiagaraComponent* Niagara;                                                 // 0x0538 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x0540 (size: 0x8)
    class UStaticMeshComponent* IndustryAqueduct_WaterPump_WaterFall;                 // 0x0548 (size: 0x8)
    class UStaticMeshComponent* WaterFall;                                            // 0x0550 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* RightTrim;                                         // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* LeftTrim;                                          // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* BalljointTrim;                                     // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* BalljointBase;                                     // 0x0578 (size: 0x8)
    class UVisBalljointComponent* VisBalljointEnd;                                    // 0x0580 (size: 0x8)
    class UStaticMeshComponent* EndMesh;                                              // 0x0588 (size: 0x8)
    class UStaticMeshComponent* MidMesh;                                              // 0x0590 (size: 0x8)
    class UVisCanalWaterControllerComponent* VisCanalWaterController;                 // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05A0 (size: 0x8)

}; // Size: 0x5A8

#endif

#ifndef UE4SS_SDK_BPVisFoodRefineryT2_HPP
#define UE4SS_SDK_BPVisFoodRefineryT2_HPP

class ABPVisFoodRefineryT2_C : public AVisRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class UVisStaticMeshComponent* MillSmallActive2;                                  // 0x0530 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* MillSmall2;                                        // 0x0548 (size: 0x8)
    double RotateSpeed;                                                               // 0x0550 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFoodRefineryT2(int32 EntryPoint);
}; // Size: 0x558

#endif

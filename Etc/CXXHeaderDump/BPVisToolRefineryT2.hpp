#ifndef UE4SS_SDK_BPVisToolRefineryT2_HPP
#define UE4SS_SDK_BPVisToolRefineryT2_HPP

class ABPVisToolRefineryT2_C : public AVisRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh15;                                   // 0x0528 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0530 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh3;                                    // 0x0538 (size: 0x8)
    class UAudioComponent* ToolMakerRefine_Cue;                                       // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh13;                                   // 0x0548 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh12;                                   // 0x0558 (size: 0x8)
    class UNiagaraComponent* WorkshopFire;                                            // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh11;                                   // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh10;                                   // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh9;                                    // 0x0578 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh8;                                    // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh7;                                    // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh6;                                    // 0x0590 (size: 0x8)
    class UStaticMeshComponent* WaterPlane1;                                          // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x05A0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x05A8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh5;                                    // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh4;                                    // 0x05B8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x05C0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect10;                                     // 0x05C8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect9;                                      // 0x05D0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x05D8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x05E0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x05E8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect8;                                      // 0x05F0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x05F8 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0600 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0608 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisToolRefineryT2(int32 EntryPoint);
}; // Size: 0x610

#endif

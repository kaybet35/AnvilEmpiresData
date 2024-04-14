#ifndef UE4SS_SDK_BpVisTownCenterT1_HPP
#define UE4SS_SDK_BpVisTownCenterT1_HPP

class ABpVisTownCenterT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04D8 (size: 0x8)
    class UNiagaraComponent* SmallFire;                                               // 0x04E0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh8;                                    // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh7;                                    // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh6;                                    // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh5;                                    // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh4;                                    // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh3;                                    // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x0518 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x0520 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0528 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0530 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0538 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0540 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0548 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0550 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect2;                                      // 0x0558 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0560 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x0568 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x0570 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterT1(int32 EntryPoint);
}; // Size: 0x578

#endif

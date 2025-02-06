#ifndef UE4SS_SDK_BpVisTownCenterKeep_HPP
#define UE4SS_SDK_BpVisTownCenterKeep_HPP

class ABpVisTownCenterKeep_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshRoof;                                 // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshSF;                                   // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshFF;                                   // 0x0548 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x0550 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x0558 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x0560 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x0568 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0570 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0578 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0580 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0588 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0590 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0598 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05B8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh1;                                        // 0x05C0 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh2;                                        // 0x05C8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh4;                                        // 0x05D0 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh3;                                        // 0x05D8 (size: 0x8)
    class UVisStaticMeshComponent* Roof;                                              // 0x05E0 (size: 0x8)
    class UVisStaticMeshComponent* Stairs;                                            // 0x05E8 (size: 0x8)
    class UVisStaticMeshComponent* FF;                                                // 0x05F0 (size: 0x8)
    class UVisStaticMeshComponent* Skirt;                                             // 0x05F8 (size: 0x8)
    class UVisStaticMeshComponent* SF;                                                // 0x0600 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0608 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0610 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0618 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0620 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0628 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0630 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect2;                                      // 0x0638 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0640 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x0648 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterKeep(int32 EntryPoint);
}; // Size: 0x650

#endif

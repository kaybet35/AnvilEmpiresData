#ifndef UE4SS_SDK_BpVisTownCenterKeepT1_HPP
#define UE4SS_SDK_BpVisTownCenterKeepT1_HPP

class ABpVisTownCenterKeepT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh5;                                        // 0x0530 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh4;                                        // 0x0538 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh3;                                        // 0x0540 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh2;                                        // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh31;                                   // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh30;                                   // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh_floor;                               // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0570 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0578 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0580 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0588 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0590 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0598 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x05A0 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect2;                                      // 0x05A8 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x05B8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterKeepT1(int32 EntryPoint);
}; // Size: 0x5C0

#endif
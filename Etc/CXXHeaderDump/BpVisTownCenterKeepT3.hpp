#ifndef UE4SS_SDK_BpVisTownCenterKeepT3_HPP
#define UE4SS_SDK_BpVisTownCenterKeepT3_HPP

class ABpVisTownCenterKeepT3_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshSF;                                   // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshRoof;                                 // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshFF;                                   // 0x0548 (size: 0x8)
    class UVisRandomMeshDecorComponent* VisRandomMeshDecor26;                         // 0x0550 (size: 0x8)
    class UVisRandomMeshDecorComponent* VisRandomMeshDecor25;                         // 0x0558 (size: 0x8)
    class UVisRandomMeshDecorComponent* VisRandomMeshDecor24;                         // 0x0560 (size: 0x8)
    class UVisRandomMeshDecorComponent* VisRandomMeshDecor23;                         // 0x0568 (size: 0x8)
    class UChildActorComponent* ChildActor35;                                         // 0x0570 (size: 0x8)
    class UChildActorComponent* ChildActor34;                                         // 0x0578 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh3;                                        // 0x0580 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh2;                                        // 0x0588 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh1;                                        // 0x0590 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* Stairs;                                            // 0x05A0 (size: 0x8)
    class UVisStaticMeshComponent* Roof;                                              // 0x05A8 (size: 0x8)
    class UVisStaticMeshComponent* SF;                                                // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* Skirt;                                             // 0x05B8 (size: 0x8)
    class UVisStaticMeshComponent* FF;                                                // 0x05C0 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x05D0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterKeepT3(int32 EntryPoint);
}; // Size: 0x5D8

#endif

#ifndef UE4SS_SDK_BpVisTownCenterKeep_HPP
#define UE4SS_SDK_BpVisTownCenterKeep_HPP

class ABpVisTownCenterKeep_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh2;                        // 0x0570 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh1;                        // 0x0578 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh;                         // 0x0580 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh3;                        // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshRoof;                                 // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshSF;                                   // 0x0598 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0600 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0608 (size: 0x8)
    class UVisStaticMeshComponent* Roof;                                              // 0x0610 (size: 0x8)
    class UVisStaticMeshComponent* Stairs;                                            // 0x0618 (size: 0x8)
    class UVisStaticMeshComponent* FF;                                                // 0x0620 (size: 0x8)
    class UVisStaticMeshComponent* Skirt;                                             // 0x0628 (size: 0x8)
    class UVisStaticMeshComponent* SF;                                                // 0x0630 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0638 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x0640 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterKeep(int32 EntryPoint);
}; // Size: 0x648

#endif

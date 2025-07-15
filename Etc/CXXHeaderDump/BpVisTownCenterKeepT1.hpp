#ifndef UE4SS_SDK_BpVisTownCenterKeepT1_HPP
#define UE4SS_SDK_BpVisTownCenterKeepT1_HPP

class ABpVisTownCenterKeepT1_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh2;                        // 0x0570 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh3;                        // 0x0578 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh1;                        // 0x0580 (size: 0x8)
    class UVisTeamSkeletalMeshComponent* VisTeamSkeletalMesh;                         // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshRoof;                                 // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshFF;                                   // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMeshSF;                                   // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0600 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0608 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0610 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0618 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0620 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x0628 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh31;                                   // 0x0630 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMeshSFBase;                               // 0x0638 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh_floor;                               // 0x0640 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMeshFFBase;                               // 0x0648 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0650 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x0658 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterKeepT1(int32 EntryPoint);
}; // Size: 0x660

#endif

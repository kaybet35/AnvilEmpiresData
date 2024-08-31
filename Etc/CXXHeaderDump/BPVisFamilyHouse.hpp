#ifndef UE4SS_SDK_BPVisFamilyHouse_HPP
#define UE4SS_SDK_BPVisFamilyHouse_HPP

class ABPVisFamilyHouse_C : public AVisFamilyInventory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0520 (size: 0x8)
    class UStaticMeshComponent* OwnerFlagMesh2;                                       // 0x0528 (size: 0x8)
    class UStaticMeshComponent* OwnerFlagMesh;                                        // 0x0530 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0538 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent1;                     // 0x0540 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x0548 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x0558 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x0560 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0568 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x0570 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyHouse(int32 EntryPoint);
}; // Size: 0x571

#endif

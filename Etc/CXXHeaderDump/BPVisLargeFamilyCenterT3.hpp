#ifndef UE4SS_SDK_BPVisLargeFamilyCenterT3_HPP
#define UE4SS_SDK_BPVisLargeFamilyCenterT3_HPP

class ABPVisLargeFamilyCenterT3_C : public AVisFamilyCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UVisStaticMeshComponent* Stairs2;                                           // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* Stairs3;                                           // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMesh;                                     // 0x0548 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent1;                     // 0x0550 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x0558 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0560 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh1;                                        // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* Stairs1;                                           // 0x0570 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0578 (size: 0x8)
    class UVisStaticMeshComponent* Stairs;                                            // 0x0580 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* Roof;                                              // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x0598 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x05A0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x05A8 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x05B0 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisLargeFamilyCenterT3(int32 EntryPoint);
}; // Size: 0x5B1

#endif

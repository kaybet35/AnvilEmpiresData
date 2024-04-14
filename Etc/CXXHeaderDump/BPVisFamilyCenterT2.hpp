#ifndef UE4SS_SDK_BPVisFamilyCenterT2_HPP
#define UE4SS_SDK_BPVisFamilyCenterT2_HPP

class ABPVisFamilyCenterT2_C : public AVisFamilyCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0498 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent1;                     // 0x04A0 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x04A8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04B0 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x04B8 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x04C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04C8 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x04D0 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyCenterT2(int32 EntryPoint);
}; // Size: 0x4D1

#endif

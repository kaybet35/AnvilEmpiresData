#ifndef UE4SS_SDK_BPVisFamilyCenter_HPP
#define UE4SS_SDK_BPVisFamilyCenter_HPP

class ABPVisFamilyCenter_C : public AVisFamilyCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x04E8 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent1;                     // 0x04F0 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x04F8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x0508 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x0510 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0518 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x0520 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyCenter(int32 EntryPoint);
}; // Size: 0x521

#endif

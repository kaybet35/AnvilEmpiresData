#ifndef UE4SS_SDK_BPVisFamilyHouse_HPP
#define UE4SS_SDK_BPVisFamilyHouse_HPP

class ABPVisFamilyHouse_C : public AVisFamilyMarkerArea
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x04B0 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x04B8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04C0 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x04C8 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x04D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04D8 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x04E0 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyHouse(int32 EntryPoint);
}; // Size: 0x4E1

#endif
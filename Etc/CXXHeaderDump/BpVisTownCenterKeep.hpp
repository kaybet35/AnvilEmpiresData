#ifndef UE4SS_SDK_BpVisTownCenterKeep_HPP
#define UE4SS_SDK_BpVisTownCenterKeep_HPP

class ABpVisTownCenterKeep_C : public AVisTownCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x04D8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh32;                                   // 0x04E0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh31;                                   // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh30;                                   // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh_floor;                               // 0x0500 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0508 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0510 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect6;                                      // 0x0518 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect1;                                      // 0x0520 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect7;                                      // 0x0528 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect4;                                      // 0x0530 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect5;                                      // 0x0538 (size: 0x8)
    class UScorchEffectComponent* ScorchEffect2;                                      // 0x0540 (size: 0x8)
    class USceneComponent* Fire;                                                      // 0x0548 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* VisTownAreaMarkerDecal;                   // 0x0550 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x0558 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BpVisTownCenterKeep(int32 EntryPoint);
}; // Size: 0x560

#endif

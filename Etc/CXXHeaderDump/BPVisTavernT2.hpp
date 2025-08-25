#ifndef UE4SS_SDK_BPVisTavernT2_HPP
#define UE4SS_SDK_BPVisTavernT2_HPP

class ABPVisTavernT2_C : public AVisRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UDecalComponent* WetDecal2;                                                 // 0x0570 (size: 0x8)
    class UDecalComponent* WetDecal1;                                                 // 0x0578 (size: 0x8)
    class UVisStaticMeshComponent* Buff4;                                             // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* Buff1;                                             // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* Buff2;                                             // 0x0590 (size: 0x8)
    class UVisStaticMeshComponent* Buff3;                                             // 0x0598 (size: 0x8)
    class UDecalComponent* WetDecal;                                                  // 0x05A0 (size: 0x8)
    class UVisStaticMeshComponent* Bowls2;                                            // 0x05A8 (size: 0x8)
    class UVisStaticMeshComponent* Bowls1;                                            // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* CuttingBoard;                                      // 0x05B8 (size: 0x8)
    class UVisStaticMeshComponent* TavernSign;                                        // 0x05C0 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x05C8 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x05D0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x05D8 (size: 0x8)
    class UVisStaticMeshComponent* Floor;                                             // 0x05E0 (size: 0x8)
    class UTavernDataComponent* TavernData;                                           // 0x05E8 (size: 0x8)
    class UVisStaticMeshComponent* Garlic3;                                           // 0x05F0 (size: 0x8)
    class UVisStaticMeshComponent* Pan1;                                              // 0x05F8 (size: 0x8)
    class UVisStaticMeshComponent* Pan;                                               // 0x0600 (size: 0x8)
    class UVisStaticMeshComponent* Bowls;                                             // 0x0608 (size: 0x8)
    class UVisStaticMeshComponent* Garlic1;                                           // 0x0610 (size: 0x8)
    class UVisStaticMeshComponent* Garlic;                                            // 0x0618 (size: 0x8)
    class UVisStaticMeshComponent* Barrels2;                                          // 0x0620 (size: 0x8)
    class UVisStaticMeshComponent* Barrels1;                                          // 0x0628 (size: 0x8)
    class UNiagaraComponent* WorkshopFire2;                                           // 0x0630 (size: 0x8)
    class UVisStaticMeshComponent* Candles2;                                          // 0x0638 (size: 0x8)
    class UNiagaraComponent* WorkshopFire;                                            // 0x0640 (size: 0x8)
    class UNiagaraComponent* WorkshopFire1;                                           // 0x0648 (size: 0x8)
    class UVisStaticMeshComponent* Candles1;                                          // 0x0650 (size: 0x8)
    class UVisStaticMeshComponent* Candles;                                           // 0x0658 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0660 (size: 0x8)
    class UVisStaticMeshComponent* FireWood;                                          // 0x0668 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent1;                     // 0x0670 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0678 (size: 0x8)
    class UVisStaticMeshComponent* Stairs;                                            // 0x0680 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x0688 (size: 0x8)
    class UVisStaticMeshComponent* Roof;                                              // 0x0690 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x0698 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x06A0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x06A8 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x06B0 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisTavernT2(int32 EntryPoint);
}; // Size: 0x6B1

#endif

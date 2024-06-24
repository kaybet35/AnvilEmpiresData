#ifndef UE4SS_SDK_BPVisTavernT2_HPP
#define UE4SS_SDK_BPVisTavernT2_HPP

class ABPVisTavernT2_C : public AVisRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UDecalComponent* WetDecal2;                                                 // 0x04D8 (size: 0x8)
    class UDecalComponent* WetDecal1;                                                 // 0x04E0 (size: 0x8)
    class UVisStaticMeshComponent* Buff4;                                             // 0x04E8 (size: 0x8)
    class UVisStaticMeshComponent* Buff1;                                             // 0x04F0 (size: 0x8)
    class UVisStaticMeshComponent* Buff2;                                             // 0x04F8 (size: 0x8)
    class UVisStaticMeshComponent* Buff3;                                             // 0x0500 (size: 0x8)
    class UDecalComponent* WetDecal;                                                  // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* Bowls2;                                            // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* Bowls1;                                            // 0x0518 (size: 0x8)
    class UVisStaticMeshComponent* CuttingBoard;                                      // 0x0520 (size: 0x8)
    class UVisStaticMeshComponent* TavernSign;                                        // 0x0528 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0530 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0538 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* Floor;                                             // 0x0548 (size: 0x8)
    class UTavernDataComponent* TavernData;                                           // 0x0550 (size: 0x8)
    class UVisStaticMeshComponent* Garlic3;                                           // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* Pan1;                                              // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* Pan;                                               // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* Bowls;                                             // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* Garlic1;                                           // 0x0578 (size: 0x8)
    class UVisStaticMeshComponent* Garlic;                                            // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* Barrels2;                                          // 0x0588 (size: 0x8)
    class UVisStaticMeshComponent* Barrels1;                                          // 0x0590 (size: 0x8)
    class UNiagaraComponent* WorkshopFire2;                                           // 0x0598 (size: 0x8)
    class UVisStaticMeshComponent* Candles2;                                          // 0x05A0 (size: 0x8)
    class UNiagaraComponent* WorkshopFire;                                            // 0x05A8 (size: 0x8)
    class UNiagaraComponent* WorkshopFire1;                                           // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* Candles1;                                          // 0x05B8 (size: 0x8)
    class UVisStaticMeshComponent* Candles;                                           // 0x05C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x05C8 (size: 0x8)
    class UVisStaticMeshComponent* FireWood;                                          // 0x05D0 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent1;                     // 0x05D8 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x05E0 (size: 0x8)
    class UVisStaticMeshComponent* Stairs;                                            // 0x05E8 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x05F0 (size: 0x8)
    class UVisStaticMeshComponent* Roof;                                              // 0x05F8 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x0600 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x0608 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0610 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x0618 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisTavernT2(int32 EntryPoint);
}; // Size: 0x619

#endif

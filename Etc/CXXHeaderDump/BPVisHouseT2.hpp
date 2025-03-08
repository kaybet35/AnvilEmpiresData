#ifndef UE4SS_SDK_BPVisHouseT2_HPP
#define UE4SS_SDK_BPVisHouseT2_HPP

class ABPVisHouseT2_C : public AVisStructure
{
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0520 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x0528 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh_Roof;                                // 0x0530 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0548 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0550 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0558 (size: 0x8)
    class UNiagaraComponent* Chimney Smoke1;                                          // 0x0560 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0568 (size: 0x8)

}; // Size: 0x570

#endif

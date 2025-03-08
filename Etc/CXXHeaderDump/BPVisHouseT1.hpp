#ifndef UE4SS_SDK_BPVisHouseT1_HPP
#define UE4SS_SDK_BPVisHouseT1_HPP

class ABPVisHouseT1_C : public AVisStructure
{
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0520 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh_Roof;                                // 0x0528 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x0530 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0538 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh10;                                   // 0x0540 (size: 0x8)
    class UVisTeamMeshComponent* VisTeamMesh;                                         // 0x0548 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh6;                                    // 0x0550 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0560 (size: 0x8)
    class USceneComponent* Populated;                                                 // 0x0568 (size: 0x8)

}; // Size: 0x570

#endif

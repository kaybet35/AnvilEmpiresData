#ifndef UE4SS_SDK_BPVisTownBarracks_HPP
#define UE4SS_SDK_BPVisTownBarracks_HPP

class ABPVisTownBarracks_C : public AVisStructure
{
    class UVisStaticMeshComponent* RoofMeshCollapsed;                                 // 0x0558 (size: 0x8)
    class UVisStaticMeshComponent* StairsMesh;                                        // 0x0560 (size: 0x8)
    class UBoxComponent* VisibilityToggleDebugBox;                                    // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* RoofMesh;                                          // 0x0570 (size: 0x8)
    class UVisStaticMeshComponent* BarracksMesh;                                      // 0x0578 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0580 (size: 0x8)

}; // Size: 0x588

#endif

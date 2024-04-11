#ifndef UE4SS_SDK_BPVisFoodTrough_HPP
#define UE4SS_SDK_BPVisFoodTrough_HPP

class ABPVisFoodTrough_C : public AVisStructure
{
    class UVisStockpileComponent* VisStockpile;                                       // 0x0480 (size: 0x8)
    class UInstancedStaticMeshComponent* ProcessedAnimalFeedHorse;                    // 0x0488 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0490 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0498 (size: 0x8)

}; // Size: 0x4A0

#endif

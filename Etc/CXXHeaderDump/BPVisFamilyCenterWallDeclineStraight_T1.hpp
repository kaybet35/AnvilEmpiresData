#ifndef UE4SS_SDK_BPVisFamilyCenterWallDeclineStraight_T1_HPP
#define UE4SS_SDK_BPVisFamilyCenterWallDeclineStraight_T1_HPP

class ABPVisFamilyCenterWallDeclineStraight_T1_C : public AVisStructure
{
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0518 (size: 0x8)
    class UVisFoundationEdgeMeshDecorComponent* VisFoundationEdgeMeshDecor1;          // 0x0520 (size: 0x8)
    class UVisFoundationEdgeMeshDecorComponent* VisFoundationEdgeMeshDecor2;          // 0x0528 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0530 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0538 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x540

#endif

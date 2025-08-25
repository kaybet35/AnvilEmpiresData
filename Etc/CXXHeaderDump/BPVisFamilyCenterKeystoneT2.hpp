#ifndef UE4SS_SDK_BPVisFamilyCenterKeystoneT2_HPP
#define UE4SS_SDK_BPVisFamilyCenterKeystoneT2_HPP

class ABPVisFamilyCenterKeystoneT2_C : public AVisFamilyCenter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UVisStaticMeshComponent* CollapsedMesh;                                     // 0x0588 (size: 0x8)
    class UVisFamilyMeshComponent* VisFamilyMesh;                                     // 0x0590 (size: 0x8)
    class UVisFoundationEdgeMeshDecorComponent* VerticalEdge02;                       // 0x0598 (size: 0x8)
    class UVisFoundationEdgeMeshDecorComponent* VerticalEdge04;                       // 0x05A0 (size: 0x8)
    class UVisFoundationEdgeMeshDecorComponent* VerticalEdge03;                       // 0x05A8 (size: 0x8)
    class UVisFoundationEdgeMeshDecorComponent* VerticalEdge01;                       // 0x05B0 (size: 0x8)
    class UVisStaticMeshComponent* HouseMesh;                                         // 0x05B8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x05C0 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x05C8 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x05D0 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x05D8 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyCenterKeystoneT2(int32 EntryPoint);
}; // Size: 0x5D9

#endif

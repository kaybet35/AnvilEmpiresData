#ifndef UE4SS_SDK_BPVisLatticeMineChunkCoal_HPP
#define UE4SS_SDK_BPVisLatticeMineChunkCoal_HPP

class ABPVisLatticeMineChunkCoal_C : public AVisActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh1;                                    // 0x04A8 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x04B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04B8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04C0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisLatticeMineChunkCoal(int32 EntryPoint);
}; // Size: 0x4C8

#endif

#ifndef UE4SS_SDK_DataflowNodes_HPP
#define UE4SS_SDK_DataflowNodes_HPP

struct FGetSkeletalMeshDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x00D0 (size: 0x8)
    FName PropertyName;                                                               // 0x00D8 (size: 0x8)

}; // Size: 0xE0

struct FGetStaticMeshDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x00D0 (size: 0x8)
    FName PropertyName;                                                               // 0x00D8 (size: 0x8)

}; // Size: 0xE0

struct FSkeletalMeshBoneDataflowNode : public FDataflowNode
{
    FName BoneName;                                                                   // 0x00D0 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x00D8 (size: 0x8)
    int32 BoneIndexOut;                                                               // 0x00E0 (size: 0x4)

}; // Size: 0xE8

#endif

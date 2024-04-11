#ifndef UE4SS_SDK_BPVisIronPile_HPP
#define UE4SS_SDK_BPVisIronPile_HPP

class ABPVisIronPile_C : public AVisActor
{
    class UGrassRemovalVolumeComponent* GrassRemovalVolume;                           // 0x03F0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0400 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0408 (size: 0x8)

}; // Size: 0x410

#endif

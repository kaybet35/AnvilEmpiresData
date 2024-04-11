#ifndef UE4SS_SDK_BPVisFurnace_HPP
#define UE4SS_SDK_BPVisFurnace_HPP

class ABPVisFurnace_C : public AVisCookingStructure
{
    class UAudioComponent* Audio;                                                     // 0x04D0 (size: 0x8)
    class UNiagaraComponent* SmokeStack;                                              // 0x04D8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04E0 (size: 0x8)

}; // Size: 0x4E8

#endif

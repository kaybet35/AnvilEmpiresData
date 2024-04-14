#ifndef UE4SS_SDK_BPVisForge_HPP
#define UE4SS_SDK_BPVisForge_HPP

class ABPVisForge_C : public AVisHeatingStructure
{
    class UAudioComponent* Audio;                                                     // 0x0500 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0508 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh2;                                    // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0518 (size: 0x8)

}; // Size: 0x520

#endif

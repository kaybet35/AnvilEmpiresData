#ifndef UE4SS_SDK_BPVisSiegeTower_HPP
#define UE4SS_SDK_BPVisSiegeTower_HPP

class ABPVisSiegeTower_C : public AVisSiegeTower
{
    class UNiagaraComponent* NiagaraLaddersAudioPosition;                             // 0x0500 (size: 0x8)
    class UNiagaraComponent* NiagaraDrawbridgeAudioPosition;                          // 0x0508 (size: 0x8)
    class UNiagaraComponent* NiagaraLadderImpact_Right;                               // 0x0510 (size: 0x8)
    class UNiagaraComponent* NiagaraLadderImpact_Left;                                // 0x0518 (size: 0x8)
    class UNiagaraComponent* NiagaraLadderImpact_Mid;                                 // 0x0520 (size: 0x8)
    class UNiagaraComponent* NiagaraDrawbridgeImpact;                                 // 0x0528 (size: 0x8)
    class UNiagaraComponent* Niagara5;                                                // 0x0530 (size: 0x8)
    class UNiagaraComponent* Niagara4;                                                // 0x0538 (size: 0x8)
    class UNiagaraComponent* Niagara3;                                                // 0x0540 (size: 0x8)
    class UNiagaraComponent* Niagara2;                                                // 0x0548 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x0550 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* Winch;                                              // 0x0560 (size: 0x8)
    class UStaticMeshComponent* SiegeTowerMidFloor;                                   // 0x0568 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0570 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0578 (size: 0x8)
    class UStaticMeshComponent* SiegeTowerTopFloor;                                   // 0x0580 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0588 (size: 0x8)
    class USkeletalMeshComponent* DrawBridge;                                         // 0x0590 (size: 0x8)
    class UMeshVisibilityDataComponent* MeshVisibilityData;                           // 0x0598 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x05A0 (size: 0x8)

}; // Size: 0x5A8

#endif

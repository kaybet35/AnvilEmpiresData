#ifndef UE4SS_SDK_BPVisFishingSpot_HPP
#define UE4SS_SDK_BPVisFishingSpot_HPP

class ABPVisFishingSpot_C : public AVisActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UParticleSystemComponent* Fish;                                             // 0x04C8 (size: 0x8)
    class UNiagaraComponent* FishRing;                                                // 0x04D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04D8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFishingSpot(int32 EntryPoint);
}; // Size: 0x4E0

#endif

#ifndef UE4SS_SDK_VisHitEffectWaterProjectile_HPP
#define UE4SS_SDK_VisHitEffectWaterProjectile_HPP

class AVisHitEffectWaterProjectile_C : public AVisEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class UParticleSystemComponent* Impact;                                           // 0x0508 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0510 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VisHitEffectWaterProjectile(int32 EntryPoint);
}; // Size: 0x518

#endif

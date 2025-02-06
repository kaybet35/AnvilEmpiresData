#ifndef UE4SS_SDK_VisHitEffectBurningOilProjectile_HPP
#define UE4SS_SDK_VisHitEffectBurningOilProjectile_HPP

class AVisHitEffectBurningOilProjectile_C : public AVisEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UParticleSystemComponent* Impact;                                           // 0x04E0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04E8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VisHitEffectBurningOilProjectile(int32 EntryPoint);
}; // Size: 0x4F0

#endif

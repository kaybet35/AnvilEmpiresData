#ifndef UE4SS_SDK_VisHitEffectWaterProjectile_HPP
#define UE4SS_SDK_VisHitEffectWaterProjectile_HPP

class AVisHitEffectWaterProjectile_C : public AVisEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* Impact;                                           // 0x0488 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0490 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VisHitEffectWaterProjectile(int32 EntryPoint);
}; // Size: 0x498

#endif

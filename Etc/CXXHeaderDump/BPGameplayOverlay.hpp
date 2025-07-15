#ifndef UE4SS_SDK_BPGameplayOverlay_HPP
#define UE4SS_SDK_BPGameplayOverlay_HPP

class UBPGameplayOverlay_C : public UGameplayOverlay
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UWidgetAnimation* WinConditionAnimation;                                    // 0x0340 (size: 0x8)

    void PlayWinConditionAnimation();
    void ExecuteUbergraph_BPGameplayOverlay(int32 EntryPoint);
}; // Size: 0x348

#endif

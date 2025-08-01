#ifndef UE4SS_SDK_BPHUDWidget_HPP
#define UE4SS_SDK_BPHUDWidget_HPP

class UBPHUDWidget_C : public UHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class UWidgetAnimation* BackoutAnimation;                                         // 0x06E8 (size: 0x8)
    class UBPFoodCooldownWidget_C* BPFoodCooldownWidget_1;                            // 0x06F0 (size: 0x8)
    class UBPRestedStatusWidget_C* BPRestedStatusWidget;                              // 0x06F8 (size: 0x8)
    class UBPTemperatureStatusWidget_C* BPTemperatureStatusWidget;                    // 0x0700 (size: 0x8)
    class UImage* GuardThresholdIndicator;                                            // 0x0708 (size: 0x8)
    class UImage* Image;                                                              // 0x0710 (size: 0x8)
    class UImage* PreAlphaBadge;                                                      // 0x0718 (size: 0x8)

    void PlayBlackoutAnimation();
    void ExecuteUbergraph_BPHUDWidget(int32 EntryPoint);
}; // Size: 0x720

#endif

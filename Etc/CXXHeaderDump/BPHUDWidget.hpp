#ifndef UE4SS_SDK_BPHUDWidget_HPP
#define UE4SS_SDK_BPHUDWidget_HPP

class UBPHUDWidget_C : public UHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    class UWidgetAnimation* BackoutAnimation;                                         // 0x0618 (size: 0x8)
    class UWidgetAnimation* WinConditionAnimation;                                    // 0x0620 (size: 0x8)
    class UImage* BackoutImage;                                                       // 0x0628 (size: 0x8)
    class UBPFoodCooldownWidget_C* BPFoodCooldownWidget_1;                            // 0x0630 (size: 0x8)
    class UBPHUDHintWidget_C* BPHUDHintWidget;                                        // 0x0638 (size: 0x8)
    class UBPRestedStatusWidget_C* BPRestedStatusWidget;                              // 0x0640 (size: 0x8)
    class UBPTemperatureStatusWidget_C* BPTemperatureStatusWidget;                    // 0x0648 (size: 0x8)
    class UImage* GuardThresholdIndicator;                                            // 0x0650 (size: 0x8)
    class UImage* Image;                                                              // 0x0658 (size: 0x8)
    class UImage* PreAlphaBadge;                                                      // 0x0660 (size: 0x8)
    class UImage* WinConditionBackground;                                             // 0x0668 (size: 0x8)

    void PlayWinConditionAnimation();
    void PlayBlackoutAnimation();
    void ExecuteUbergraph_BPHUDWidget(int32 EntryPoint);
}; // Size: 0x670

#endif

#ifndef UE4SS_SDK_BPCookingWindow_HPP
#define UE4SS_SDK_BPCookingWindow_HPP

class UBPCookingWindow_C : public UCookingWindow
{
    class UBPHeaderContainer_C* ActionsHeader;                                        // 0x0400 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0408 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0410 (size: 0x8)
    class UBPAnvilPanel_C* BPAnvilPanel;                                              // 0x0418 (size: 0x8)
    class UBPCombustionPanelWidget_C* BPCombustionPanelWidget;                        // 0x0420 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0428 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer;                                    // 0x0430 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0438 (size: 0x8)
    class UBPMainAreaContainer_C* CookingPanel;                                       // 0x0440 (size: 0x8)
    class UBPMainAreaContainer_C* FuelPanel;                                          // 0x0448 (size: 0x8)

}; // Size: 0x450

#endif

#ifndef UE4SS_SDK_BPGrainMillWindow_HPP
#define UE4SS_SDK_BPGrainMillWindow_HPP

class UBPGrainMillWindow_C : public UGrainMillWindow
{
    class UBPHeaderContainer_C* ActionsHeader;                                        // 0x03E0 (size: 0x8)
    class UImage* Arrow;                                                              // 0x03E8 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x03F0 (size: 0x8)
    class UBPAnvilPanel_C* BPAnvilPanel;                                              // 0x03F8 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0400 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0408 (size: 0x8)
    class UBPMainAreaContainer_C* CookingPanel;                                       // 0x0410 (size: 0x8)

}; // Size: 0x418

#endif

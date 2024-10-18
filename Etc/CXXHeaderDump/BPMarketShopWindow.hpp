#ifndef UE4SS_SDK_BPMarketShopWindow_HPP
#define UE4SS_SDK_BPMarketShopWindow_HPP

class UBPMarketShopWindow_C : public UMarketShopWindow
{
    class UBPHeaderContainer_C* ActionsHeader;                                        // 0x0300 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0308 (size: 0x8)
    class UBPAnvilPanel_C* BPAnvilPanel;                                              // 0x0310 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0318 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0320 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer_1;                              // 0x0328 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0330 (size: 0x8)

}; // Size: 0x338

#endif

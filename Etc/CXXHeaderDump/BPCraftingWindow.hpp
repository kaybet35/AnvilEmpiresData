#ifndef UE4SS_SDK_BPCraftingWindow_HPP
#define UE4SS_SDK_BPCraftingWindow_HPP

class UBPCraftingWindow_C : public UCraftingWindow
{
    class UBPHeaderContainer_C* ActionsHeader;                                        // 0x02F0 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x02F8 (size: 0x8)
    class UBPAnvilPanel_C* BPAnvilPanel;                                              // 0x0300 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0308 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0310 (size: 0x8)
    class UBPMainAreaContainer_C* InventoryContainer;                                 // 0x0318 (size: 0x8)

}; // Size: 0x320

#endif

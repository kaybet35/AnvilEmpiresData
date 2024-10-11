#ifndef UE4SS_SDK_BPRelicTechCenterWindow_HPP
#define UE4SS_SDK_BPRelicTechCenterWindow_HPP

class UBPRelicTechCenterWindow_C : public URelicTechCenterWindow
{
    class UBPHeaderContainer_C* ActionsHeader;                                        // 0x02F8 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0300 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0308 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0310 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0318 (size: 0x8)
    class UBPAnvilPanel_C* StructurePanel;                                            // 0x0320 (size: 0x8)

}; // Size: 0x328

#endif

#ifndef UE4SS_SDK_BPQuenchingStationWindow_HPP
#define UE4SS_SDK_BPQuenchingStationWindow_HPP

class UBPQuenchingStationWindow_C : public UQuenchingWindow
{
    class UBPHeaderContainer_C* ActionHeader;                                         // 0x02F8 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0300 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0308 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer;                                    // 0x0310 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0318 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0320 (size: 0x8)
    class UBPAnvilPanel_C* StructurePanel;                                            // 0x0328 (size: 0x8)

}; // Size: 0x330

#endif

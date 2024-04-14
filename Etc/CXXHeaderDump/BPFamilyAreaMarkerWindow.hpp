#ifndef UE4SS_SDK_BPFamilyAreaMarkerWindow_HPP
#define UE4SS_SDK_BPFamilyAreaMarkerWindow_HPP

class UBPFamilyAreaMarkerWindow_C : public UFamilyAreaMarkerWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0310 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0318 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer;                                    // 0x0320 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer2;                                   // 0x0328 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0330 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer_378;                            // 0x0338 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0340 (size: 0x8)
    class UBPAnvilPanel_C* StructurePanel;                                            // 0x0348 (size: 0x8)

    void ExecuteUbergraph_BPFamilyAreaMarkerWindow(int32 EntryPoint);
}; // Size: 0x350

#endif

#ifndef UE4SS_SDK_BPFamilyAreaMarkerWindow_HPP
#define UE4SS_SDK_BPFamilyAreaMarkerWindow_HPP

class UBPFamilyAreaMarkerWindow_C : public UFamilyAreaMarkerWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UBPMainAreaContainer_C* AlliedFamiliesBox;                                  // 0x0328 (size: 0x8)
    class UBPHeaderContainer_C* AlliedFamiliesHeader;                                 // 0x0330 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0338 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0340 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer;                                    // 0x0348 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0350 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0358 (size: 0x8)
    class UBPAnvilPanel_C* FamilyHousePanel;                                          // 0x0360 (size: 0x8)
    class UBPMainAreaContainer_C* MemberContainer;                                    // 0x0368 (size: 0x8)
    class UBPHeaderContainer_C* MemberHeader;                                         // 0x0370 (size: 0x8)
    class UBPAnvilPanel_C* MemberPanel;                                               // 0x0378 (size: 0x8)

    void ExecuteUbergraph_BPFamilyAreaMarkerWindow(int32 EntryPoint);
}; // Size: 0x380

#endif

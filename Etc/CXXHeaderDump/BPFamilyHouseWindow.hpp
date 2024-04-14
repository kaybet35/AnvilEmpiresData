#ifndef UE4SS_SDK_BPFamilyHouseWindow_HPP
#define UE4SS_SDK_BPFamilyHouseWindow_HPP

class UBPFamilyHouseWindow_C : public UFamilyHouseWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x02E8 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x02F0 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer;                                    // 0x02F8 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0300 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0308 (size: 0x8)
    class UBPAnvilPanel_C* FamilyHousePanel;                                          // 0x0310 (size: 0x8)

    void ExecuteUbergraph_BPFamilyHouseWindow(int32 EntryPoint);
}; // Size: 0x318

#endif

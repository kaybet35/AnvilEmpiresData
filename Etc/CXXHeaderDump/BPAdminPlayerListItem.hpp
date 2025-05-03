#ifndef UE4SS_SDK_BPAdminPlayerListItem_HPP
#define UE4SS_SDK_BPAdminPlayerListItem_HPP

class UBPAdminPlayerListItem_C : public UAdminPlayerListItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* bg_border;                                                         // 0x02D8 (size: 0x8)
    class UImage* Image_65;                                                           // 0x02E0 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BPAdminPlayerListItem(int32 EntryPoint);
}; // Size: 0x2E8

#endif

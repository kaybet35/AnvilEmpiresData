#ifndef UE4SS_SDK_BPMapWidget_HPP
#define UE4SS_SDK_BPMapWidget_HPP

class UBPMapWidget_C : public UMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class UImage* Background;                                                         // 0x03F8 (size: 0x8)
    class UBPTimeSeasonWidget_C* BPTimeSeasonWidget;                                  // 0x0400 (size: 0x8)
    class UImage* Frame;                                                              // 0x0408 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0410 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BPMapWidget(int32 EntryPoint);
}; // Size: 0x418

#endif

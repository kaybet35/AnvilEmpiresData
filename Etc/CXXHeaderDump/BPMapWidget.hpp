#ifndef UE4SS_SDK_BPMapWidget_HPP
#define UE4SS_SDK_BPMapWidget_HPP

class UBPMapWidget_C : public UMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UImage* Background;                                                         // 0x0480 (size: 0x8)
    class UImage* Frame;                                                              // 0x0488 (size: 0x8)
    class UTextBlock* ObjectiveHeaderText;                                            // 0x0490 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0498 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BPMapWidget(int32 EntryPoint);
}; // Size: 0x4A0

#endif

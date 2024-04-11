#ifndef UE4SS_SDK_BPMapWidget_HPP
#define UE4SS_SDK_BPMapWidget_HPP

class UBPMapWidget_C : public UMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UImage* Background;                                                         // 0x0430 (size: 0x8)
    class UImage* Frame;                                                              // 0x0438 (size: 0x8)
    class UTextBlock* ObjectiveHeaderText;                                            // 0x0440 (size: 0x8)
    class UTextBlock* ObjectiveText;                                                  // 0x0448 (size: 0x8)
    class UTextBlock* TimeOfDayText;                                                  // 0x0450 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0458 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BP_OnMapImageSet(class UTexture2D* MapImage);
    void ExecuteUbergraph_BPMapWidget(int32 EntryPoint);
}; // Size: 0x460

#endif

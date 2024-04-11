#ifndef UE4SS_SDK_BPVisFishIndicatorRing_HPP
#define UE4SS_SDK_BPVisFishIndicatorRing_HPP

class ABPVisFishIndicatorRing_C : public AVisFishingIndicator
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    float Timeline_0_NewTrack_1_2CFF309E4B858830E6684BB931EBCBB0;                     // 0x02E0 (size: 0x4)
    float Timeline_0_NewTrack_0_2CFF309E4B858830E6684BB931EBCBB0;                     // 0x02E4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2CFF309E4B858830E6684BB931EBCBB0; // 0x02E8 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02F0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFishIndicatorRing(int32 EntryPoint);
}; // Size: 0x2F8

#endif

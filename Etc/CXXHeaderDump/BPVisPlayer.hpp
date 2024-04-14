#ifndef UE4SS_SDK_BPVisPlayer_HPP
#define UE4SS_SDK_BPVisPlayer_HPP

class ABpVisPlayer_C : public AVisPlayer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0660 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0668 (size: 0x8)

    void BP_UpdateNightShroudMaterials(float NightTimeNormalized);
    void ExecuteUbergraph_BpVisPlayer(int32 EntryPoint);
}; // Size: 0x670

#endif

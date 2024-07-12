#ifndef UE4SS_SDK_BPVisPlayer_HPP
#define UE4SS_SDK_BPVisPlayer_HPP

class ABpVisPlayer_C : public AVisPlayer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07B8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x07C0 (size: 0x8)

    void BP_UpdateNightShroudMaterials();
    void ExecuteUbergraph_BpVisPlayer(int32 EntryPoint);
}; // Size: 0x7C8

#endif

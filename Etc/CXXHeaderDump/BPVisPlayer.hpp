#ifndef UE4SS_SDK_BPVisPlayer_HPP
#define UE4SS_SDK_BPVisPlayer_HPP

class ABpVisPlayer_C : public AVisPlayer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0838 (size: 0x8)

    void BP_UpdateNightShroudMaterials();
    void ExecuteUbergraph_BpVisPlayer(int32 EntryPoint);
}; // Size: 0x840

#endif

#ifndef UE4SS_SDK_DataflowEngine_HPP
#define UE4SS_SDK_DataflowEngine_HPP

class UDataflow : public UEdGraph
{
    bool bActive;                                                                     // 0x0070 (size: 0x1)
    TArray<class UObject*> Targets;                                                   // 0x0078 (size: 0x10)

}; // Size: 0x88

class UDataflowEdNode : public UEdGraphNode
{
}; // Size: 0xB8

#endif

#ifndef UE4SS_SDK_DataflowCore_HPP
#define UE4SS_SDK_DataflowCore_HPP

struct FDataflowConnection
{
}; // Size: 0x40

struct FDataflowInput : public FDataflowConnection
{
}; // Size: 0x48

struct FDataflowNode
{
    bool bActive;                                                                     // 0x00C8 (size: 0x1)

}; // Size: 0xD0

struct FDataflowOutput : public FDataflowConnection
{
}; // Size: 0x68

#endif

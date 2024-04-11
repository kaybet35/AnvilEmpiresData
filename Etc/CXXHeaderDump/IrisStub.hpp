#ifndef UE4SS_SDK_IrisStub_HPP
#define UE4SS_SDK_IrisStub_HPP

struct FNetSerializerConfig
{
}; // Size: 0x1

struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x1

struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x1

class UDataStream : public UObject
{
}; // Size: 0x28

class UIrisObjectReferencePackageMap : public UObject
{
}; // Size: 0x28

class UNetBlobHandler : public UObject
{
}; // Size: 0x28

class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
}; // Size: 0x28

class UNetObjectFilter : public UObject
{
}; // Size: 0x28

class UNetObjectFilterConfig : public UObject
{
}; // Size: 0x28

class UNetObjectPrioritizer : public UObject
{
}; // Size: 0x28

class UNetObjectPrioritizerConfig : public UObject
{
}; // Size: 0x28

class UObjectReplicationBridge : public UReplicationBridge
{
}; // Size: 0x28

class UReplicationBridge : public UObject
{
}; // Size: 0x28

class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
}; // Size: 0x28

class USequentialPartialNetBlobHandlerConfig : public UObject
{
}; // Size: 0x28

class USphereWithOwnerBoostNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
}; // Size: 0x28

#endif

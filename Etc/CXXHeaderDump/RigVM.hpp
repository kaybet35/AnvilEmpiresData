#ifndef UE4SS_SDK_RigVM_HPP
#define UE4SS_SDK_RigVM_HPP

#include "RigVM_enums.hpp"

struct FRigVMBaseOp
{
}; // Size: 0x1

struct FRigVMBinaryOp : public FRigVMBaseOp
{
}; // Size: 0xE

struct FRigVMBreakpoint
{
}; // Size: 0x28

struct FRigVMByteCode
{
    TArray<uint8> ByteCode;                                                           // 0x0000 (size: 0x10)
    int32 NumInstructions;                                                            // 0x0010 (size: 0x4)
    TArray<FRigVMByteCodeEntry> Entries;                                              // 0x0018 (size: 0x10)

}; // Size: 0x30

struct FRigVMByteCodeEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 InstructionIndex;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigVMByteCodeStatistics
{
    int32 InstructionCount;                                                           // 0x0000 (size: 0x4)
    int32 DataBytes;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
}; // Size: 0x8

struct FRigVMComparisonOp : public FRigVMBaseOp
{
}; // Size: 0x14

struct FRigVMCopyOp : public FRigVMBaseOp
{
}; // Size: 0x12

struct FRigVMDebugInfo
{
}; // Size: 0xF8

struct FRigVMDispatchFactory
{
}; // Size: 0x18

struct FRigVMExecuteContext
{
}; // Size: 0x30

struct FRigVMExecuteOp : public FRigVMBaseOp
{
}; // Size: 0x4

struct FRigVMExtendedExecuteContext
{
}; // Size: 0x78

struct FRigVMInstruction
{
    uint64 ByteCodeIndex;                                                             // 0x0000 (size: 0x8)
    ERigVMOpCode OpCode;                                                              // 0x0008 (size: 0x1)
    uint8 OperandAlignment;                                                           // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FRigVMInstructionArray
{
    TArray<FRigVMInstruction> Instructions;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigVMInvokeEntryOp : public FRigVMBaseOp
{
}; // Size: 0xC

struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
}; // Size: 0x10

struct FRigVMJumpOp : public FRigVMBaseOp
{
}; // Size: 0x8

struct FRigVMMemoryContainer
{
    bool bUseNameMap;                                                                 // 0x0000 (size: 0x1)
    ERigVMMemoryType MemoryType;                                                      // 0x0001 (size: 0x1)
    TArray<FRigVMRegister> Registers;                                                 // 0x0008 (size: 0x10)
    TArray<FRigVMRegisterOffset> RegisterOffsets;                                     // 0x0018 (size: 0x10)
    TArray<uint8> Data;                                                               // 0x0028 (size: 0x10)
    TArray<class UScriptStruct*> ScriptStructs;                                       // 0x0038 (size: 0x10)
    TMap<FName, int32> NameMap;                                                       // 0x0048 (size: 0x50)
    bool bEncounteredErrorDuringLoad;                                                 // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FRigVMMemoryStatistics
{
    int32 RegisterCount;                                                              // 0x0000 (size: 0x4)
    int32 DataBytes;                                                                  // 0x0004 (size: 0x4)
    int32 TotalBytes;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigVMOperand
{
    ERigVMMemoryType MemoryType;                                                      // 0x0000 (size: 0x1)
    uint16 RegisterIndex;                                                             // 0x0002 (size: 0x2)
    uint16 RegisterOffset;                                                            // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FRigVMParameter
{
    ERigVMParameterType Type;                                                         // 0x0000 (size: 0x1)
    FName Name;                                                                       // 0x0004 (size: 0x8)
    int32 RegisterIndex;                                                              // 0x000C (size: 0x4)
    FString CPPType;                                                                  // 0x0010 (size: 0x10)
    class UScriptStruct* ScriptStruct;                                                // 0x0020 (size: 0x8)
    FName ScriptStructPath;                                                           // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FRigVMQuaternaryOp : public FRigVMBaseOp
{
}; // Size: 0x1A

struct FRigVMQuinaryOp : public FRigVMBaseOp
{
}; // Size: 0x20

struct FRigVMRegister
{
    ERigVMRegisterType Type;                                                          // 0x0000 (size: 0x1)
    uint32 ByteIndex;                                                                 // 0x0004 (size: 0x4)
    uint16 ElementSize;                                                               // 0x0008 (size: 0x2)
    uint16 ElementCount;                                                              // 0x000A (size: 0x2)
    uint16 SliceCount;                                                                // 0x000C (size: 0x2)
    uint8 AlignmentBytes;                                                             // 0x000E (size: 0x1)
    uint16 TrailingBytes;                                                             // 0x0010 (size: 0x2)
    FName Name;                                                                       // 0x0014 (size: 0x8)
    int32 ScriptStructIndex;                                                          // 0x001C (size: 0x4)
    bool bIsArray;                                                                    // 0x0020 (size: 0x1)
    bool bIsDynamic;                                                                  // 0x0021 (size: 0x1)

}; // Size: 0x24

struct FRigVMRegisterOffset
{
    TArray<int32> Segments;                                                           // 0x0000 (size: 0x10)
    ERigVMRegisterType Type;                                                          // 0x0010 (size: 0x1)
    FName CPPType;                                                                    // 0x0014 (size: 0x8)
    class UScriptStruct* ScriptStruct;                                                // 0x0020 (size: 0x8)
    class UScriptStruct* ParentScriptStruct;                                          // 0x0028 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0030 (size: 0x4)
    uint16 ElementSize;                                                               // 0x0034 (size: 0x2)
    FString CachedSegmentPath;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRigVMRuntimeSettings
{
    int32 MaximumArraySize;                                                           // 0x0000 (size: 0x4)

}; // Size: 0x18

struct FRigVMSenaryOp : public FRigVMBaseOp
{
}; // Size: 0x26

struct FRigVMSlice
{
}; // Size: 0xC

struct FRigVMStatistics
{
    int32 BytesForCDO;                                                                // 0x0000 (size: 0x4)
    int32 BytesPerInstance;                                                           // 0x0004 (size: 0x4)
    FRigVMMemoryStatistics LiteralMemory;                                             // 0x0008 (size: 0xC)
    FRigVMMemoryStatistics WorkMemory;                                                // 0x0014 (size: 0xC)
    FRigVMMemoryStatistics DebugMemory;                                               // 0x0020 (size: 0xC)
    int32 BytesForCaching;                                                            // 0x002C (size: 0x4)
    FRigVMByteCodeStatistics ByteCode;                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FRigVMStruct
{
}; // Size: 0x8

struct FRigVMTemplateArgumentType
{
    FName CPPType;                                                                    // 0x0000 (size: 0x8)
    class UObject* CPPTypeObject;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigVMTernaryOp : public FRigVMBaseOp
{
}; // Size: 0x14

struct FRigVMUnaryOp : public FRigVMBaseOp
{
}; // Size: 0x8

struct FRigVMUnknownType
{
    uint32 Hash;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRigVMUserWorkflow
{
    FString Title;                                                                    // 0x0008 (size: 0x10)
    FString ToolTip;                                                                  // 0x0018 (size: 0x10)
    ERigVMUserWorkflowType Type;                                                      // 0x0028 (size: 0x1)
    FRigVMUserWorkflowPerformDynamicDelegate PerformDynamicDelegate;                  // 0x0040 (size: 0x10)
    bool RigVMPeformUserWorkflowDynamicDelegate(const class URigVMUserWorkflowOptions* InOptions, class UObject* InController);
    UClass* OptionsClass;                                                             // 0x0050 (size: 0x8)

}; // Size: 0x58

class UDefault__RigVMMemoryStorageGeneratorClass
{
}; // Size: 0x0

class URigVM : public UObject
{
    class URigVMMemoryStorage* WorkMemoryStorageObject;                               // 0x0028 (size: 0x8)
    class URigVMMemoryStorage* LiteralMemoryStorageObject;                            // 0x0030 (size: 0x8)
    class URigVMMemoryStorage* DebugMemoryStorageObject;                              // 0x0038 (size: 0x8)
    FRigVMByteCode ByteCodeStorage;                                                   // 0x0060 (size: 0x30)
    FRigVMInstructionArray Instructions;                                              // 0x0098 (size: 0x10)
    FRigVMExtendedExecuteContext Context;                                             // 0x00A8 (size: 0x78)
    uint32 NumExecutions;                                                             // 0x0120 (size: 0x4)
    TArray<FName> FunctionNamesStorage;                                               // 0x0128 (size: 0x10)
    TArray<FRigVMParameter> Parameters;                                               // 0x0170 (size: 0x10)
    TMap<FName, int32> ParametersNameMap;                                             // 0x0180 (size: 0x50)
    class URigVM* DeferredVMToCopy;                                                   // 0x0288 (size: 0x8)

    void SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex);
    void SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex);
    void SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex);
    void SetParameterValueString(const FName& InParameterName, FString InValue, int32 InArrayIndex);
    void SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex);
    void SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex);
    void SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex);
    void SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex);
    void SetParameterValueDouble(const FName& InParameterName, double InValue, int32 InArrayIndex);
    void SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex);
    FRigVMStatistics GetStatistics();
    FString GetRigVMFunctionName(int32 InFunctionIndex);
    FVector2D GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex);
    FVector GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex);
    FTransform GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex);
    FString GetParameterValueString(const FName& InParameterName, int32 InArrayIndex);
    FQuat GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex);
    FName GetParameterValueName(const FName& InParameterName, int32 InArrayIndex);
    int32 GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex);
    float GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex);
    double GetParameterValueDouble(const FName& InParameterName, int32 InArrayIndex);
    bool GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex);
    bool Execute(const FName& InEntryName);
    int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const FName& InMethodName);
}; // Size: 0x2A8

class URigVMMemoryStorage : public UObject
{
}; // Size: 0x28

class URigVMMemoryStorageGeneratorClass : public UClass
{
}; // Size: 0x270

class URigVMNativized : public URigVM
{
}; // Size: 0x2B0

class URigVMUserWorkflowOptions : public UObject
{
    class UObject* Subject;                                                           // 0x0028 (size: 0x8)
    FRigVMUserWorkflow Workflow;                                                      // 0x0030 (size: 0x58)

    bool RequiresDialog();
    void ReportWarning(FString InMessage);
    void ReportInfo(FString InMessage);
    void ReportError(FString InMessage);
    bool IsValid();
}; // Size: 0x98

#endif

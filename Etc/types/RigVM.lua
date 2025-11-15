---@meta

---@class FRigVMBaseOp
local FRigVMBaseOp = {}


---@class FRigVMBinaryOp : FRigVMBaseOp
local FRigVMBinaryOp = {}


---@class FRigVMBreakpoint
local FRigVMBreakpoint = {}


---@class FRigVMByteCode
---@field ByteCode TArray<uint8>
---@field NumInstructions int32
---@field Entries TArray<FRigVMByteCodeEntry>
local FRigVMByteCode = {}



---@class FRigVMByteCodeEntry
---@field Name FName
---@field InstructionIndex int32
local FRigVMByteCodeEntry = {}



---@class FRigVMByteCodeStatistics
---@field InstructionCount int32
---@field DataBytes int32
local FRigVMByteCodeStatistics = {}



---@class FRigVMChangeTypeOp : FRigVMUnaryOp
local FRigVMChangeTypeOp = {}


---@class FRigVMComparisonOp : FRigVMBaseOp
local FRigVMComparisonOp = {}


---@class FRigVMCopyOp : FRigVMBaseOp
local FRigVMCopyOp = {}


---@class FRigVMDebugInfo
local FRigVMDebugInfo = {}


---@class FRigVMDispatchFactory
local FRigVMDispatchFactory = {}


---@class FRigVMExecuteContext
local FRigVMExecuteContext = {}


---@class FRigVMExecuteOp : FRigVMBaseOp
local FRigVMExecuteOp = {}


---@class FRigVMExtendedExecuteContext
local FRigVMExtendedExecuteContext = {}


---@class FRigVMInstruction
---@field ByteCodeIndex uint64
---@field OpCode ERigVMOpCode
---@field OperandAlignment uint8
local FRigVMInstruction = {}



---@class FRigVMInstructionArray
---@field Instructions TArray<FRigVMInstruction>
local FRigVMInstructionArray = {}



---@class FRigVMInvokeEntryOp : FRigVMBaseOp
local FRigVMInvokeEntryOp = {}


---@class FRigVMJumpIfOp : FRigVMUnaryOp
local FRigVMJumpIfOp = {}


---@class FRigVMJumpOp : FRigVMBaseOp
local FRigVMJumpOp = {}


---@class FRigVMMemoryContainer
---@field bUseNameMap boolean
---@field MemoryType ERigVMMemoryType
---@field Registers TArray<FRigVMRegister>
---@field RegisterOffsets TArray<FRigVMRegisterOffset>
---@field Data TArray<uint8>
---@field ScriptStructs TArray<UScriptStruct>
---@field NameMap TMap<FName, int32>
---@field bEncounteredErrorDuringLoad boolean
local FRigVMMemoryContainer = {}



---@class FRigVMMemoryStatistics
---@field RegisterCount int32
---@field DataBytes int32
---@field TotalBytes int32
local FRigVMMemoryStatistics = {}



---@class FRigVMOperand
---@field MemoryType ERigVMMemoryType
---@field RegisterIndex uint16
---@field RegisterOffset uint16
local FRigVMOperand = {}



---@class FRigVMParameter
---@field Type ERigVMParameterType
---@field Name FName
---@field RegisterIndex int32
---@field CPPType FString
---@field ScriptStruct UScriptStruct
---@field ScriptStructPath FName
local FRigVMParameter = {}



---@class FRigVMQuaternaryOp : FRigVMBaseOp
local FRigVMQuaternaryOp = {}


---@class FRigVMQuinaryOp : FRigVMBaseOp
local FRigVMQuinaryOp = {}


---@class FRigVMRegister
---@field Type ERigVMRegisterType
---@field ByteIndex uint32
---@field ElementSize uint16
---@field ElementCount uint16
---@field SliceCount uint16
---@field AlignmentBytes uint8
---@field TrailingBytes uint16
---@field Name FName
---@field ScriptStructIndex int32
---@field bIsArray boolean
---@field bIsDynamic boolean
local FRigVMRegister = {}



---@class FRigVMRegisterOffset
---@field Segments TArray<int32>
---@field Type ERigVMRegisterType
---@field CPPType FName
---@field ScriptStruct UScriptStruct
---@field ParentScriptStruct UScriptStruct
---@field ArrayIndex int32
---@field ElementSize uint16
---@field CachedSegmentPath FString
local FRigVMRegisterOffset = {}



---@class FRigVMRuntimeSettings
---@field MaximumArraySize int32
local FRigVMRuntimeSettings = {}



---@class FRigVMSenaryOp : FRigVMBaseOp
local FRigVMSenaryOp = {}


---@class FRigVMSlice
local FRigVMSlice = {}


---@class FRigVMStatistics
---@field BytesForCDO int32
---@field BytesPerInstance int32
---@field LiteralMemory FRigVMMemoryStatistics
---@field WorkMemory FRigVMMemoryStatistics
---@field DebugMemory FRigVMMemoryStatistics
---@field BytesForCaching int32
---@field ByteCode FRigVMByteCodeStatistics
local FRigVMStatistics = {}



---@class FRigVMStruct
local FRigVMStruct = {}


---@class FRigVMTemplateArgumentType
---@field CPPType FName
---@field CPPTypeObject UObject
local FRigVMTemplateArgumentType = {}



---@class FRigVMTernaryOp : FRigVMBaseOp
local FRigVMTernaryOp = {}


---@class FRigVMUnaryOp : FRigVMBaseOp
local FRigVMUnaryOp = {}


---@class FRigVMUnknownType
---@field Hash uint32
local FRigVMUnknownType = {}



---@class FRigVMUserWorkflow
---@field Title FString
---@field ToolTip FString
---@field Type ERigVMUserWorkflowType
---@field PerformDynamicDelegate FRigVMUserWorkflowPerformDynamicDelegate
---@field OptionsClass TObjectPtr<UClass>
local FRigVMUserWorkflow = {}



---@class UDefault__RigVMMemoryStorageGeneratorClass
local UDefault__RigVMMemoryStorageGeneratorClass = {}


---@class URigVM : UObject
---@field WorkMemoryStorageObject URigVMMemoryStorage
---@field LiteralMemoryStorageObject URigVMMemoryStorage
---@field DebugMemoryStorageObject URigVMMemoryStorage
---@field ByteCodeStorage FRigVMByteCode
---@field Instructions FRigVMInstructionArray
---@field Context FRigVMExtendedExecuteContext
---@field NumExecutions uint32
---@field FunctionNamesStorage TArray<FName>
---@field Parameters TArray<FRigVMParameter>
---@field ParametersNameMap TMap<FName, int32>
---@field DeferredVMToCopy URigVM
local URigVM = {}

---@param InParameterName FName
---@param InValue FVector2D
---@param InArrayIndex int32
function URigVM:SetParameterValueVector2D(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue FVector
---@param InArrayIndex int32
function URigVM:SetParameterValueVector(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue FTransform
---@param InArrayIndex int32
function URigVM:SetParameterValueTransform(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue FString
---@param InArrayIndex int32
function URigVM:SetParameterValueString(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue FQuat
---@param InArrayIndex int32
function URigVM:SetParameterValueQuat(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue FName
---@param InArrayIndex int32
function URigVM:SetParameterValueName(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue int32
---@param InArrayIndex int32
function URigVM:SetParameterValueInt(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue float
---@param InArrayIndex int32
function URigVM:SetParameterValueFloat(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue double
---@param InArrayIndex int32
function URigVM:SetParameterValueDouble(InParameterName, InValue, InArrayIndex) end
---@param InParameterName FName
---@param InValue boolean
---@param InArrayIndex int32
function URigVM:SetParameterValueBool(InParameterName, InValue, InArrayIndex) end
---@return FRigVMStatistics
function URigVM:GetStatistics() end
---@param InFunctionIndex int32
---@return FString
function URigVM:GetRigVMFunctionName(InFunctionIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return FVector2D
function URigVM:GetParameterValueVector2D(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return FVector
function URigVM:GetParameterValueVector(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return FTransform
function URigVM:GetParameterValueTransform(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return FString
function URigVM:GetParameterValueString(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return FQuat
function URigVM:GetParameterValueQuat(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return FName
function URigVM:GetParameterValueName(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return int32
function URigVM:GetParameterValueInt(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return float
function URigVM:GetParameterValueFloat(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return double
function URigVM:GetParameterValueDouble(InParameterName, InArrayIndex) end
---@param InParameterName FName
---@param InArrayIndex int32
---@return boolean
function URigVM:GetParameterValueBool(InParameterName, InArrayIndex) end
---@param InEntryName FName
---@return boolean
function URigVM:Execute(InEntryName) end
---@param InRigVMStruct UScriptStruct
---@param InMethodName FName
---@return int32
function URigVM:AddRigVMFunction(InRigVMStruct, InMethodName) end


---@class URigVMMemoryStorage : UObject
local URigVMMemoryStorage = {}


---@class URigVMMemoryStorageGeneratorClass : UClass
local URigVMMemoryStorageGeneratorClass = {}


---@class URigVMNativized : URigVM
local URigVMNativized = {}


---@class URigVMUserWorkflowOptions : UObject
---@field Subject UObject
---@field Workflow FRigVMUserWorkflow
local URigVMUserWorkflowOptions = {}

---@return boolean
function URigVMUserWorkflowOptions:RequiresDialog() end
---@param InMessage FString
function URigVMUserWorkflowOptions:ReportWarning(InMessage) end
---@param InMessage FString
function URigVMUserWorkflowOptions:ReportInfo(InMessage) end
---@param InMessage FString
function URigVMUserWorkflowOptions:ReportError(InMessage) end
---@return boolean
function URigVMUserWorkflowOptions:IsValid() end



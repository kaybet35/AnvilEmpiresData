---@meta

---@class FRigVMBaseOp
FRigVMBaseOp = {}


---@class FRigVMBinaryOp : FRigVMBaseOp
FRigVMBinaryOp = {}


---@class FRigVMBreakpoint
FRigVMBreakpoint = {}


---@class FRigVMByteCode
---@field ByteCode TArray<uint8>
---@field NumInstructions int32
---@field Entries TArray<FRigVMByteCodeEntry>
FRigVMByteCode = {}



---@class FRigVMByteCodeEntry
---@field Name FName
---@field InstructionIndex int32
FRigVMByteCodeEntry = {}



---@class FRigVMByteCodeStatistics
---@field InstructionCount int32
---@field DataBytes int32
FRigVMByteCodeStatistics = {}



---@class FRigVMChangeTypeOp : FRigVMUnaryOp
FRigVMChangeTypeOp = {}


---@class FRigVMComparisonOp : FRigVMBaseOp
FRigVMComparisonOp = {}


---@class FRigVMCopyOp : FRigVMBaseOp
FRigVMCopyOp = {}


---@class FRigVMDebugInfo
FRigVMDebugInfo = {}


---@class FRigVMDispatchFactory
FRigVMDispatchFactory = {}


---@class FRigVMExecuteContext
FRigVMExecuteContext = {}


---@class FRigVMExecuteOp : FRigVMBaseOp
FRigVMExecuteOp = {}


---@class FRigVMExtendedExecuteContext
FRigVMExtendedExecuteContext = {}


---@class FRigVMInstruction
---@field ByteCodeIndex uint64
---@field OpCode ERigVMOpCode
---@field OperandAlignment uint8
FRigVMInstruction = {}



---@class FRigVMInstructionArray
---@field Instructions TArray<FRigVMInstruction>
FRigVMInstructionArray = {}



---@class FRigVMInvokeEntryOp : FRigVMBaseOp
FRigVMInvokeEntryOp = {}


---@class FRigVMJumpIfOp : FRigVMUnaryOp
FRigVMJumpIfOp = {}


---@class FRigVMJumpOp : FRigVMBaseOp
FRigVMJumpOp = {}


---@class FRigVMMemoryContainer
---@field bUseNameMap boolean
---@field MemoryType ERigVMMemoryType
---@field Registers TArray<FRigVMRegister>
---@field RegisterOffsets TArray<FRigVMRegisterOffset>
---@field Data TArray<uint8>
---@field ScriptStructs TArray<UScriptStruct>
---@field NameMap TMap<FName, int32>
---@field bEncounteredErrorDuringLoad boolean
FRigVMMemoryContainer = {}



---@class FRigVMMemoryStatistics
---@field RegisterCount int32
---@field DataBytes int32
---@field TotalBytes int32
FRigVMMemoryStatistics = {}



---@class FRigVMOperand
---@field MemoryType ERigVMMemoryType
---@field RegisterIndex uint16
---@field RegisterOffset uint16
FRigVMOperand = {}



---@class FRigVMParameter
---@field Type ERigVMParameterType
---@field Name FName
---@field RegisterIndex int32
---@field CPPType FString
---@field ScriptStruct UScriptStruct
---@field ScriptStructPath FName
FRigVMParameter = {}



---@class FRigVMQuaternaryOp : FRigVMBaseOp
FRigVMQuaternaryOp = {}


---@class FRigVMQuinaryOp : FRigVMBaseOp
FRigVMQuinaryOp = {}


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
FRigVMRegister = {}



---@class FRigVMRegisterOffset
---@field Segments TArray<int32>
---@field Type ERigVMRegisterType
---@field CPPType FName
---@field ScriptStruct UScriptStruct
---@field ParentScriptStruct UScriptStruct
---@field ArrayIndex int32
---@field ElementSize uint16
---@field CachedSegmentPath FString
FRigVMRegisterOffset = {}



---@class FRigVMRuntimeSettings
---@field MaximumArraySize int32
FRigVMRuntimeSettings = {}



---@class FRigVMSenaryOp : FRigVMBaseOp
FRigVMSenaryOp = {}


---@class FRigVMSlice
FRigVMSlice = {}


---@class FRigVMStatistics
---@field BytesForCDO int32
---@field BytesPerInstance int32
---@field LiteralMemory FRigVMMemoryStatistics
---@field WorkMemory FRigVMMemoryStatistics
---@field DebugMemory FRigVMMemoryStatistics
---@field BytesForCaching int32
---@field ByteCode FRigVMByteCodeStatistics
FRigVMStatistics = {}



---@class FRigVMStruct
FRigVMStruct = {}


---@class FRigVMTemplateArgumentType
---@field CPPType FName
---@field CPPTypeObject UObject
FRigVMTemplateArgumentType = {}



---@class FRigVMTernaryOp : FRigVMBaseOp
FRigVMTernaryOp = {}


---@class FRigVMUnaryOp : FRigVMBaseOp
FRigVMUnaryOp = {}


---@class FRigVMUnknownType
---@field Hash uint32
FRigVMUnknownType = {}



---@class FRigVMUserWorkflow
---@field Title FString
---@field ToolTip FString
---@field Type ERigVMUserWorkflowType
---@field PerformDynamicDelegate FRigVMUserWorkflowPerformDynamicDelegate
---@field OptionsClass TObjectPtr<UClass>
FRigVMUserWorkflow = {}



---@class UDefault__RigVMMemoryStorageGeneratorClass
UDefault__RigVMMemoryStorageGeneratorClass = {}


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
URigVM = {}

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
URigVMMemoryStorage = {}


---@class URigVMMemoryStorageGeneratorClass : UClass
URigVMMemoryStorageGeneratorClass = {}


---@class URigVMNativized : URigVM
URigVMNativized = {}


---@class URigVMUserWorkflowOptions : UObject
---@field Subject UObject
---@field Workflow FRigVMUserWorkflow
URigVMUserWorkflowOptions = {}

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



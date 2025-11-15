---@meta

---@class FMetasoundFrontendClass
---@field ID FGuid
---@field MetaData FMetasoundFrontendClassMetadata
---@field Interface FMetasoundFrontendClassInterface
local FMetasoundFrontendClass = {}



---@class FMetasoundFrontendClassEnvironmentVariable
---@field Name FName
---@field TypeName FName
---@field bIsRequired boolean
local FMetasoundFrontendClassEnvironmentVariable = {}



---@class FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
---@field DefaultLiteral FMetasoundFrontendLiteral
local FMetasoundFrontendClassInput = {}



---@class FMetasoundFrontendClassInterface
---@field Inputs TArray<FMetasoundFrontendClassInput>
---@field Outputs TArray<FMetasoundFrontendClassOutput>
---@field Environment TArray<FMetasoundFrontendClassEnvironmentVariable>
---@field ChangeID FGuid
local FMetasoundFrontendClassInterface = {}



---@class FMetasoundFrontendClassMetadata
---@field ClassName FMetasoundFrontendClassName
---@field Version FMetasoundFrontendVersionNumber
---@field Type EMetasoundFrontendClassType
---@field bIsDeprecated boolean
---@field bAutoUpdateManagesInterface boolean
---@field ChangeID FGuid
local FMetasoundFrontendClassMetadata = {}



---@class FMetasoundFrontendClassName
---@field Namespace FName
---@field Name FName
---@field Variant FName
local FMetasoundFrontendClassName = {}



---@class FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
local FMetasoundFrontendClassOutput = {}


---@class FMetasoundFrontendClassStyle
local FMetasoundFrontendClassStyle = {}


---@class FMetasoundFrontendClassStyleDisplay
local FMetasoundFrontendClassStyleDisplay = {}


---@class FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
---@field DefaultLiteral FMetasoundFrontendLiteral
local FMetasoundFrontendClassVariable = {}



---@class FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
---@field NodeID FGuid
---@field AccessType EMetasoundFrontendVertexAccessType
local FMetasoundFrontendClassVertex = {}



---@class FMetasoundFrontendDocument
---@field MetaData FMetasoundFrontendDocumentMetadata
---@field Interfaces TSet<FMetasoundFrontendVersion>
---@field RootGraph FMetasoundFrontendGraphClass
---@field Subgraphs TArray<FMetasoundFrontendGraphClass>
---@field Dependencies TArray<FMetasoundFrontendClass>
---@field ArchetypeVersion FMetasoundFrontendVersion
---@field InterfaceVersions TArray<FMetasoundFrontendVersion>
local FMetasoundFrontendDocument = {}



---@class FMetasoundFrontendDocumentMetadata
---@field Version FMetasoundFrontendVersion
local FMetasoundFrontendDocumentMetadata = {}



---@class FMetasoundFrontendEdge
---@field FromNodeID FGuid
---@field FromVertexID FGuid
---@field ToNodeID FGuid
---@field ToVertexID FGuid
local FMetasoundFrontendEdge = {}



---@class FMetasoundFrontendEdgeStyle
---@field NodeID FGuid
---@field OutputName FName
---@field LiteralColorPairs TArray<FMetasoundFrontendEdgeStyleLiteralColorPair>
local FMetasoundFrontendEdgeStyle = {}



---@class FMetasoundFrontendEdgeStyleLiteralColorPair
---@field Value FMetasoundFrontendLiteral
---@field Color FLinearColor
local FMetasoundFrontendEdgeStyleLiteralColorPair = {}



---@class FMetasoundFrontendGraph
---@field Nodes TArray<FMetasoundFrontendNode>
---@field Edges TArray<FMetasoundFrontendEdge>
---@field Variables TArray<FMetasoundFrontendVariable>
local FMetasoundFrontendGraph = {}



---@class FMetasoundFrontendGraphClass : FMetasoundFrontendClass
---@field Graph FMetasoundFrontendGraph
---@field PresetOptions FMetasoundFrontendGraphClassPresetOptions
local FMetasoundFrontendGraphClass = {}



---@class FMetasoundFrontendGraphClassPresetOptions
---@field bIsPreset boolean
---@field InputsInheritingDefault TSet<FName>
local FMetasoundFrontendGraphClassPresetOptions = {}



---@class FMetasoundFrontendGraphStyle
---@field bIsGraphEditable boolean
---@field EdgeStyles TArray<FMetasoundFrontendEdgeStyle>
local FMetasoundFrontendGraphStyle = {}



---@class FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
---@field Version FMetasoundFrontendVersion
local FMetasoundFrontendInterface = {}



---@class FMetasoundFrontendInterfaceStyle
local FMetasoundFrontendInterfaceStyle = {}


---@class FMetasoundFrontendLiteral
---@field Type EMetasoundFrontendLiteralType
---@field AsNumDefault int32
---@field AsBoolean TArray<boolean>
---@field AsInteger TArray<int32>
---@field AsFloat TArray<float>
---@field AsString TArray<FString>
---@field AsUObject TArray<UObject>
local FMetasoundFrontendLiteral = {}



---@class FMetasoundFrontendNode
---@field ID FGuid
---@field ClassID FGuid
---@field Name FName
---@field Interface FMetasoundFrontendNodeInterface
---@field InputLiterals TArray<FMetasoundFrontendVertexLiteral>
local FMetasoundFrontendNode = {}



---@class FMetasoundFrontendNodeInterface
---@field Inputs TArray<FMetasoundFrontendVertex>
---@field Outputs TArray<FMetasoundFrontendVertex>
---@field Environment TArray<FMetasoundFrontendVertex>
local FMetasoundFrontendNodeInterface = {}



---@class FMetasoundFrontendNodeStyle
local FMetasoundFrontendNodeStyle = {}


---@class FMetasoundFrontendNodeStyleDisplay
local FMetasoundFrontendNodeStyleDisplay = {}


---@class FMetasoundFrontendVariable
---@field Name FName
---@field TypeName FName
---@field Literal FMetasoundFrontendLiteral
---@field ID FGuid
---@field VariableNodeID FGuid
---@field MutatorNodeID FGuid
---@field AccessorNodeIDs TArray<FGuid>
---@field DeferredAccessorNodeIDs TArray<FGuid>
local FMetasoundFrontendVariable = {}



---@class FMetasoundFrontendVersion
---@field Name FName
---@field Number FMetasoundFrontendVersionNumber
local FMetasoundFrontendVersion = {}



---@class FMetasoundFrontendVersionNumber
---@field Major int32
---@field Minor int32
local FMetasoundFrontendVersionNumber = {}



---@class FMetasoundFrontendVertex
---@field Name FName
---@field TypeName FName
---@field VertexID FGuid
local FMetasoundFrontendVertex = {}



---@class FMetasoundFrontendVertexLiteral
---@field VertexID FGuid
---@field Value FMetasoundFrontendLiteral
local FMetasoundFrontendVertexLiteral = {}



---@class FMetasoundFrontendVertexMetadata
local FMetasoundFrontendVertexMetadata = {}



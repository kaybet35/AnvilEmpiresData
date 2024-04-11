---@meta

---@class FUVMapSettings
---@field Size FVector
---@field UVTile FVector2D
---@field Position FVector
---@field Rotation FRotator
---@field Scale FVector
FUVMapSettings = {}



---@class UStaticMeshDescription : UMeshDescriptionBase
UStaticMeshDescription = {}

---@param VertexInstanceID FVertexInstanceID
---@param UV FVector2D
---@param UVIndex int32
function UStaticMeshDescription:SetVertexInstanceUV(VertexInstanceID, UV, UVIndex) end
---@param PolygonGroupID FPolygonGroupID
---@param SlotName FName
function UStaticMeshDescription:SetPolygonGroupMaterialSlotName(PolygonGroupID, SlotName) end
---@param VertexInstanceID FVertexInstanceID
---@param UVIndex int32
---@return FVector2D
function UStaticMeshDescription:GetVertexInstanceUV(VertexInstanceID, UVIndex) end
---@param Center FVector
---@param HalfExtents FVector
---@param PolygonGroup FPolygonGroupID
---@param PolygonID_PlusX FPolygonID
---@param PolygonID_MinusX FPolygonID
---@param PolygonID_PlusY FPolygonID
---@param PolygonID_MinusY FPolygonID
---@param PolygonID_PlusZ FPolygonID
---@param PolygonID_MinusZ FPolygonID
function UStaticMeshDescription:CreateCube(Center, HalfExtents, PolygonGroup, PolygonID_PlusX, PolygonID_MinusX, PolygonID_PlusY, PolygonID_MinusY, PolygonID_PlusZ, PolygonID_MinusZ) end



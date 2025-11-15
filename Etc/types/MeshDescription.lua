---@meta

---@class FEdgeID : FElementID
local FEdgeID = {}


---@class FElementID
---@field IDValue int32
local FElementID = {}



---@class FPolygonGroupID : FElementID
local FPolygonGroupID = {}


---@class FPolygonID : FElementID
local FPolygonID = {}


---@class FTriangleID : FElementID
local FTriangleID = {}


---@class FUVID : FElementID
local FUVID = {}


---@class FVertexID : FElementID
local FVertexID = {}


---@class FVertexInstanceID : FElementID
local FVertexInstanceID = {}


---@class UMeshDescriptionBase : UObject
local UMeshDescriptionBase = {}

---@param VertexID FVertexID
---@param Position FVector
function UMeshDescriptionBase:SetVertexPosition(VertexID, Position) end
---@param PolygonID FPolygonID
---@param VertexInstanceIDs TArray<FVertexInstanceID>
function UMeshDescriptionBase:SetPolygonVertexInstances(PolygonID, VertexInstanceIDs) end
---@param PolygonID FPolygonID
---@param PolygonGroupID FPolygonGroupID
function UMeshDescriptionBase:SetPolygonPolygonGroup(PolygonID, PolygonGroupID) end
---@param PolygonID FPolygonID
function UMeshDescriptionBase:ReversePolygonFacing(PolygonID) end
---@param NumberOfNewVertices int32
function UMeshDescriptionBase:ReserveNewVertices(NumberOfNewVertices) end
---@param NumberOfNewVertexInstances int32
function UMeshDescriptionBase:ReserveNewVertexInstances(NumberOfNewVertexInstances) end
---@param NumberOfNewTriangles int32
function UMeshDescriptionBase:ReserveNewTriangles(NumberOfNewTriangles) end
---@param NumberOfNewPolygons int32
function UMeshDescriptionBase:ReserveNewPolygons(NumberOfNewPolygons) end
---@param NumberOfNewPolygonGroups int32
function UMeshDescriptionBase:ReserveNewPolygonGroups(NumberOfNewPolygonGroups) end
---@param NumberOfNewEdges int32
function UMeshDescriptionBase:ReserveNewEdges(NumberOfNewEdges) end
---@param VertexID FVertexID
---@return boolean
function UMeshDescriptionBase:IsVertexValid(VertexID) end
---@param VertexID FVertexID
---@return boolean
function UMeshDescriptionBase:IsVertexOrphaned(VertexID) end
---@param VertexInstanceID FVertexInstanceID
---@return boolean
function UMeshDescriptionBase:IsVertexInstanceValid(VertexInstanceID) end
---@param TriangleID FTriangleID
---@return boolean
function UMeshDescriptionBase:IsTriangleValid(TriangleID) end
---@param TriangleID FTriangleID
---@return boolean
function UMeshDescriptionBase:IsTrianglePartOfNgon(TriangleID) end
---@param PolygonID FPolygonID
---@return boolean
function UMeshDescriptionBase:IsPolygonValid(PolygonID) end
---@param PolygonGroupID FPolygonGroupID
---@return boolean
function UMeshDescriptionBase:IsPolygonGroupValid(PolygonGroupID) end
---@return boolean
function UMeshDescriptionBase:IsEmpty() end
---@param EdgeID FEdgeID
---@return boolean
function UMeshDescriptionBase:IsEdgeValid(EdgeID) end
---@param EdgeID FEdgeID
---@param PolygonID FPolygonID
---@return boolean
function UMeshDescriptionBase:IsEdgeInternalToPolygon(EdgeID, PolygonID) end
---@param EdgeID FEdgeID
---@return boolean
function UMeshDescriptionBase:IsEdgeInternal(EdgeID) end
---@param VertexID FVertexID
---@param OutVertexInstanceIDs TArray<FVertexInstanceID>
function UMeshDescriptionBase:GetVertexVertexInstances(VertexID, OutVertexInstanceIDs) end
---@param VertexID FVertexID
---@return FVector
function UMeshDescriptionBase:GetVertexPosition(VertexID) end
---@param VertexID0 FVertexID
---@param VertexID1 FVertexID
---@return FEdgeID
function UMeshDescriptionBase:GetVertexPairEdge(VertexID0, VertexID1) end
---@param VertexInstanceID FVertexInstanceID
---@return FVertexID
function UMeshDescriptionBase:GetVertexInstanceVertex(VertexInstanceID) end
---@param VertexInstanceID0 FVertexInstanceID
---@param VertexInstanceID1 FVertexInstanceID
---@return FEdgeID
function UMeshDescriptionBase:GetVertexInstancePairEdge(VertexInstanceID0, VertexInstanceID1) end
---@param TriangleID FTriangleID
---@param VertexID FVertexID
---@return FVertexInstanceID
function UMeshDescriptionBase:GetVertexInstanceForTriangleVertex(TriangleID, VertexID) end
---@param PolygonID FPolygonID
---@param VertexID FVertexID
---@return FVertexInstanceID
function UMeshDescriptionBase:GetVertexInstanceForPolygonVertex(PolygonID, VertexID) end
---@return int32
function UMeshDescriptionBase:GetVertexInstanceCount() end
---@param VertexInstanceID FVertexInstanceID
---@param OutConnectedTriangleIDs TArray<FTriangleID>
function UMeshDescriptionBase:GetVertexInstanceConnectedTriangles(VertexInstanceID, OutConnectedTriangleIDs) end
---@param VertexInstanceID FVertexInstanceID
---@param OutConnectedPolygonIDs TArray<FPolygonID>
function UMeshDescriptionBase:GetVertexInstanceConnectedPolygons(VertexInstanceID, OutConnectedPolygonIDs) end
---@return int32
function UMeshDescriptionBase:GetVertexCount() end
---@param VertexID FVertexID
---@param OutConnectedTriangleIDs TArray<FTriangleID>
function UMeshDescriptionBase:GetVertexConnectedTriangles(VertexID, OutConnectedTriangleIDs) end
---@param VertexID FVertexID
---@param OutConnectedPolygonIDs TArray<FPolygonID>
function UMeshDescriptionBase:GetVertexConnectedPolygons(VertexID, OutConnectedPolygonIDs) end
---@param VertexID FVertexID
---@param OutEdgeIDs TArray<FEdgeID>
function UMeshDescriptionBase:GetVertexConnectedEdges(VertexID, OutEdgeIDs) end
---@param VertexID FVertexID
---@param OutAdjacentVertexIDs TArray<FVertexID>
function UMeshDescriptionBase:GetVertexAdjacentVertices(VertexID, OutAdjacentVertexIDs) end
---@param TriangleID FTriangleID
---@param OutVertexIDs TArray<FVertexID>
function UMeshDescriptionBase:GetTriangleVertices(TriangleID, OutVertexIDs) end
---@param TriangleID FTriangleID
---@param OutVertexInstanceIDs TArray<FVertexInstanceID>
function UMeshDescriptionBase:GetTriangleVertexInstances(TriangleID, OutVertexInstanceIDs) end
---@param TriangleID FTriangleID
---@param Index int32
---@return FVertexInstanceID
function UMeshDescriptionBase:GetTriangleVertexInstance(TriangleID, Index) end
---@param TriangleID FTriangleID
---@return FPolygonGroupID
function UMeshDescriptionBase:GetTrianglePolygonGroup(TriangleID) end
---@param TriangleID FTriangleID
---@return FPolygonID
function UMeshDescriptionBase:GetTrianglePolygon(TriangleID) end
---@param TriangleID FTriangleID
---@param OutEdgeIDs TArray<FEdgeID>
function UMeshDescriptionBase:GetTriangleEdges(TriangleID, OutEdgeIDs) end
---@return int32
function UMeshDescriptionBase:GetTriangleCount() end
---@param TriangleID FTriangleID
---@param OutTriangleIDs TArray<FTriangleID>
function UMeshDescriptionBase:GetTriangleAdjacentTriangles(TriangleID, OutTriangleIDs) end
---@param PolygonID FPolygonID
---@param OutVertexIDs TArray<FVertexID>
function UMeshDescriptionBase:GetPolygonVertices(PolygonID, OutVertexIDs) end
---@param PolygonID FPolygonID
---@param OutVertexInstanceIDs TArray<FVertexInstanceID>
function UMeshDescriptionBase:GetPolygonVertexInstances(PolygonID, OutVertexInstanceIDs) end
---@param PolygonID FPolygonID
---@param OutTriangleIDs TArray<FTriangleID>
function UMeshDescriptionBase:GetPolygonTriangles(PolygonID, OutTriangleIDs) end
---@param PolygonID FPolygonID
---@return FPolygonGroupID
function UMeshDescriptionBase:GetPolygonPolygonGroup(PolygonID) end
---@param PolygonID FPolygonID
---@param OutEdgeIDs TArray<FEdgeID>
function UMeshDescriptionBase:GetPolygonPerimeterEdges(PolygonID, OutEdgeIDs) end
---@param PolygonID FPolygonID
---@param OutEdgeIDs TArray<FEdgeID>
function UMeshDescriptionBase:GetPolygonInternalEdges(PolygonID, OutEdgeIDs) end
---@param PolygonGroupID FPolygonGroupID
---@param OutPolygonIDs TArray<FPolygonID>
function UMeshDescriptionBase:GetPolygonGroupPolygons(PolygonGroupID, OutPolygonIDs) end
---@return int32
function UMeshDescriptionBase:GetPolygonGroupCount() end
---@return int32
function UMeshDescriptionBase:GetPolygonCount() end
---@param PolygonID FPolygonID
---@param OutPolygonIDs TArray<FPolygonID>
function UMeshDescriptionBase:GetPolygonAdjacentPolygons(PolygonID, OutPolygonIDs) end
---@param VertexID FVertexID
---@return int32
function UMeshDescriptionBase:GetNumVertexVertexInstances(VertexID) end
---@param VertexInstanceID FVertexInstanceID
---@return int32
function UMeshDescriptionBase:GetNumVertexInstanceConnectedTriangles(VertexInstanceID) end
---@param VertexInstanceID FVertexInstanceID
---@return int32
function UMeshDescriptionBase:GetNumVertexInstanceConnectedPolygons(VertexInstanceID) end
---@param VertexID FVertexID
---@return int32
function UMeshDescriptionBase:GetNumVertexConnectedTriangles(VertexID) end
---@param VertexID FVertexID
---@return int32
function UMeshDescriptionBase:GetNumVertexConnectedPolygons(VertexID) end
---@param VertexID FVertexID
---@return int32
function UMeshDescriptionBase:GetNumVertexConnectedEdges(VertexID) end
---@param PolygonID FPolygonID
---@return int32
function UMeshDescriptionBase:GetNumPolygonVertices(PolygonID) end
---@param PolygonID FPolygonID
---@return int32
function UMeshDescriptionBase:GetNumPolygonTriangles(PolygonID) end
---@param PolygonID FPolygonID
---@return int32
function UMeshDescriptionBase:GetNumPolygonInternalEdges(PolygonID) end
---@param PolygonGroupID FPolygonGroupID
---@return int32
function UMeshDescriptionBase:GetNumPolygonGroupPolygons(PolygonGroupID) end
---@param EdgeID FEdgeID
---@return int32
function UMeshDescriptionBase:GetNumEdgeConnectedTriangles(EdgeID) end
---@param EdgeID FEdgeID
---@return int32
function UMeshDescriptionBase:GetNumEdgeConnectedPolygons(EdgeID) end
---@param EdgeID FEdgeID
---@param OutVertexIDs TArray<FVertexID>
function UMeshDescriptionBase:GetEdgeVertices(EdgeID, OutVertexIDs) end
---@param EdgeID FEdgeID
---@param VertexNumber int32
---@return FVertexID
function UMeshDescriptionBase:GetEdgeVertex(EdgeID, VertexNumber) end
---@return int32
function UMeshDescriptionBase:GetEdgeCount() end
---@param EdgeID FEdgeID
---@param OutConnectedTriangleIDs TArray<FTriangleID>
function UMeshDescriptionBase:GetEdgeConnectedTriangles(EdgeID, OutConnectedTriangleIDs) end
---@param EdgeID FEdgeID
---@param OutConnectedPolygonIDs TArray<FPolygonID>
function UMeshDescriptionBase:GetEdgeConnectedPolygons(EdgeID, OutConnectedPolygonIDs) end
function UMeshDescriptionBase:Empty() end
---@param VertexInstanceID FVertexInstanceID
---@param OrphanedVertices TArray<FVertexID>
function UMeshDescriptionBase:DeleteVertexInstance(VertexInstanceID, OrphanedVertices) end
---@param VertexID FVertexID
function UMeshDescriptionBase:DeleteVertex(VertexID) end
---@param TriangleID FTriangleID
---@param OrphanedEdges TArray<FEdgeID>
---@param OrphanedVertexInstances TArray<FVertexInstanceID>
---@param OrphanedPolygonGroupsPtr TArray<FPolygonGroupID>
function UMeshDescriptionBase:DeleteTriangle(TriangleID, OrphanedEdges, OrphanedVertexInstances, OrphanedPolygonGroupsPtr) end
---@param PolygonGroupID FPolygonGroupID
function UMeshDescriptionBase:DeletePolygonGroup(PolygonGroupID) end
---@param PolygonID FPolygonID
---@param OrphanedEdges TArray<FEdgeID>
---@param OrphanedVertexInstances TArray<FVertexInstanceID>
---@param OrphanedPolygonGroups TArray<FPolygonGroupID>
function UMeshDescriptionBase:DeletePolygon(PolygonID, OrphanedEdges, OrphanedVertexInstances, OrphanedPolygonGroups) end
---@param EdgeID FEdgeID
---@param OrphanedVertices TArray<FVertexID>
function UMeshDescriptionBase:DeleteEdge(EdgeID, OrphanedVertices) end
---@param VertexID FVertexID
function UMeshDescriptionBase:CreateVertexWithID(VertexID) end
---@param VertexInstanceID FVertexInstanceID
---@param VertexID FVertexID
function UMeshDescriptionBase:CreateVertexInstanceWithID(VertexInstanceID, VertexID) end
---@param VertexID FVertexID
---@return FVertexInstanceID
function UMeshDescriptionBase:CreateVertexInstance(VertexID) end
---@return FVertexID
function UMeshDescriptionBase:CreateVertex() end
---@param TriangleID FTriangleID
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray<FVertexInstanceID>
---@param NewEdgeIDs TArray<FEdgeID>
function UMeshDescriptionBase:CreateTriangleWithID(TriangleID, PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray<FVertexInstanceID>
---@param NewEdgeIDs TArray<FEdgeID>
---@return FTriangleID
function UMeshDescriptionBase:CreateTriangle(PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end
---@param PolygonID FPolygonID
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray<FVertexInstanceID>
---@param NewEdgeIDs TArray<FEdgeID>
function UMeshDescriptionBase:CreatePolygonWithID(PolygonID, PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end
---@param PolygonGroupID FPolygonGroupID
function UMeshDescriptionBase:CreatePolygonGroupWithID(PolygonGroupID) end
---@return FPolygonGroupID
function UMeshDescriptionBase:CreatePolygonGroup() end
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray<FVertexInstanceID>
---@param NewEdgeIDs TArray<FEdgeID>
---@return FPolygonID
function UMeshDescriptionBase:CreatePolygon(PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end
---@param EdgeID FEdgeID
---@param VertexID0 FVertexID
---@param VertexID1 FVertexID
function UMeshDescriptionBase:CreateEdgeWithID(EdgeID, VertexID0, VertexID1) end
---@param VertexID0 FVertexID
---@param VertexID1 FVertexID
---@return FEdgeID
function UMeshDescriptionBase:CreateEdge(VertexID0, VertexID1) end
---@param PolygonID FPolygonID
function UMeshDescriptionBase:ComputePolygonTriangulation(PolygonID) end


---@class UMeshDescriptionBaseBulkData : UObject
local UMeshDescriptionBaseBulkData = {}



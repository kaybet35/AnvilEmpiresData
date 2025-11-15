---@meta

---@class FCustomMeshTriangle
---@field Vertex0 FVector
---@field Vertex1 FVector
---@field Vertex2 FVector
local FCustomMeshTriangle = {}



---@class UCustomMeshComponent : UMeshComponent
local UCustomMeshComponent = {}

---@param Triangles TArray<FCustomMeshTriangle>
---@return boolean
function UCustomMeshComponent:SetCustomMeshTriangles(Triangles) end
function UCustomMeshComponent:ClearCustomMeshTriangles() end
---@param Triangles TArray<FCustomMeshTriangle>
function UCustomMeshComponent:AddCustomMeshTriangles(Triangles) end



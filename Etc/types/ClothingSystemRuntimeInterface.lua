---@meta

---@class FClothCollisionData
---@field Spheres TArray<FClothCollisionPrim_Sphere>
---@field SphereConnections TArray<FClothCollisionPrim_SphereConnection>
---@field Convexes TArray<FClothCollisionPrim_Convex>
---@field Boxes TArray<FClothCollisionPrim_Box>
local FClothCollisionData = {}



---@class FClothCollisionPrim_Box
---@field LocalPosition FVector
---@field LocalRotation FQuat
---@field HalfExtents FVector
---@field BoneIndex int32
local FClothCollisionPrim_Box = {}



---@class FClothCollisionPrim_Convex
---@field Faces TArray<FClothCollisionPrim_ConvexFace>
---@field SurfacePoints TArray<FVector>
---@field BoneIndex int32
local FClothCollisionPrim_Convex = {}



---@class FClothCollisionPrim_ConvexFace
---@field Plane FPlane
---@field Indices TArray<int32>
local FClothCollisionPrim_ConvexFace = {}



---@class FClothCollisionPrim_Sphere
---@field BoneIndex int32
---@field Radius float
---@field LocalPosition FVector
local FClothCollisionPrim_Sphere = {}



---@class FClothCollisionPrim_SphereConnection
---@field SphereIndices int32
local FClothCollisionPrim_SphereConnection = {}



---@class FClothVertBoneData
---@field NumInfluences int32
---@field BoneIndices uint16
---@field BoneWeights float
local FClothVertBoneData = {}



---@class UClothConfigBase : UObject
local UClothConfigBase = {}


---@class UClothPhysicalMeshDataBase_Legacy : UObject
---@field Vertices TArray<FVector3f>
---@field Normals TArray<FVector3f>
---@field Indices TArray<uint32>
---@field InverseMasses TArray<float>
---@field BoneData TArray<FClothVertBoneData>
---@field NumFixedVerts int32
---@field MaxBoneWeights int32
---@field SelfCollisionIndices TArray<uint32>
local UClothPhysicalMeshDataBase_Legacy = {}



---@class UClothingAssetBase : UObject
---@field ImportedFilePath FString
---@field AssetGuid FGuid
local UClothingAssetBase = {}



---@class UClothingInteractor : UObject
local UClothingInteractor = {}


---@class UClothingSimulationFactory : UObject
local UClothingSimulationFactory = {}


---@class UClothingSimulationInteractor : UObject
---@field ClothingInteractors TMap<FName, UClothingInteractor>
local UClothingSimulationInteractor = {}

---@param NumSubsteps int32
function UClothingSimulationInteractor:SetNumSubsteps(NumSubsteps) end
---@param NumIterations int32
function UClothingSimulationInteractor:SetNumIterations(NumIterations) end
---@param MaxNumIterations int32
function UClothingSimulationInteractor:SetMaxNumIterations(MaxNumIterations) end
---@param InStiffness float
function UClothingSimulationInteractor:SetAnimDriveSpringStiffness(InStiffness) end
function UClothingSimulationInteractor:PhysicsAssetUpdated() end
---@return float
function UClothingSimulationInteractor:GetSimulationTime() end
---@return int32
function UClothingSimulationInteractor:GetNumSubsteps() end
---@return int32
function UClothingSimulationInteractor:GetNumKinematicParticles() end
---@return int32
function UClothingSimulationInteractor:GetNumIterations() end
---@return int32
function UClothingSimulationInteractor:GetNumDynamicParticles() end
---@return int32
function UClothingSimulationInteractor:GetNumCloths() end
---@param ClothingAssetName FString
---@return UClothingInteractor
function UClothingSimulationInteractor:GetClothingInteractor(ClothingAssetName) end
---@param InVector FVector
function UClothingSimulationInteractor:EnableGravityOverride(InVector) end
function UClothingSimulationInteractor:DisableGravityOverride() end
function UClothingSimulationInteractor:ClothConfigUpdated() end


---@class UDEPRECATED_ClothSharedSimConfigBase : UObject
local UDEPRECATED_ClothSharedSimConfigBase = {}



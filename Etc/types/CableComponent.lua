---@meta

---@class ACableActor : AActor
---@field CableComponent UCableComponent
ACableActor = {}



---@class UCableComponent : UMeshComponent
---@field bAttachStart boolean
---@field bAttachEnd boolean
---@field AttachEndTo FComponentReference
---@field AttachEndToSocketName FName
---@field EndLocation FVector
---@field CableLength float
---@field NumSegments int32
---@field SubstepTime float
---@field SolverIterations int32
---@field bEnableStiffness boolean
---@field bUseSubstepping boolean
---@field bSkipCableUpdateWhenNotVisible boolean
---@field bSkipCableUpdateWhenNotOwnerRecentlyRendered boolean
---@field bEnableCollision boolean
---@field CollisionFriction float
---@field CableForce FVector
---@field CableGravityScale float
---@field CableWidth float
---@field NumSides int32
---@field TileMaterial float
UCableComponent = {}

---@param Component USceneComponent
---@param SocketName FName
function UCableComponent:SetAttachEndToComponent(Component, SocketName) end
---@param Actor AActor
---@param ComponentProperty FName
---@param SocketName FName
function UCableComponent:SetAttachEndTo(Actor, ComponentProperty, SocketName) end
---@param Locations TArray<FVector>
function UCableComponent:GetCableParticleLocations(Locations) end
---@return USceneComponent
function UCableComponent:GetAttachedComponent() end
---@return AActor
function UCableComponent:GetAttachedActor() end



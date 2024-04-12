---@meta

---@class ABPVisCanal_C : AVisSpline
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LandscapeCullBalljointMid UStaticMeshComponent
---@field LandscapeCullBalljointEnd UStaticMeshComponent
---@field LandscapeCullBalljointStart UStaticMeshComponent
---@field BalljointTrimEnd UStaticMeshComponent
---@field BalljointBaseEnd UStaticMeshComponent
---@field AdapterEnd UStaticMeshComponent
---@field AngleTrimRightEnd UStaticMeshComponent
---@field AngleTrimLeftEnd UStaticMeshComponent
---@field AngleBaseEnd UStaticMeshComponent
---@field OffsetBase USceneComponent
---@field VisBalljointEnd UVisBalljointComponent
---@field AdapterStart UStaticMeshComponent
---@field AngleTrimRightStart UStaticMeshComponent
---@field AngleTrimLeftStart UStaticMeshComponent
---@field AngleBaseStart UStaticMeshComponent
---@field BalljointTrimStart UStaticMeshComponent
---@field BalljointBaseStart UStaticMeshComponent
---@field VisBalljointStart UVisBalljointComponent
---@field EndStraightMesh UStaticMeshComponent
---@field StartStraightMesh UStaticMeshComponent
---@field MidMesh UStaticMeshComponent
---@field EndNodeBase USceneComponent
---@field StartMesh UStaticMeshComponent
---@field VisCanalWaterController UVisCanalWaterControllerComponent
---@field EndMesh UStaticMeshComponent
ABPVisCanal_C = {}

---@param DeltaSeconds float
function ABPVisCanal_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisCanal_C:ExecuteUbergraph_BPVisCanal(EntryPoint) end



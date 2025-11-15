---@meta

---@class ABPVisCanal_C : AVisSpline
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FoliageCullBalljointStart UBPFoliageCullStaticMeshComponent_C
---@field FoliageCullBalljointEnd UBPFoliageCullStaticMeshComponent_C
---@field FoliageCullBalljointMid UBPFoliageCullStaticMeshComponent_C
---@field LandscapeCullBalljointEnd UBPLandscapeCullStaticMeshComponent_C
---@field LandscapeCullBalljointStart UBPLandscapeCullStaticMeshComponent_C
---@field LandscapeCullBalljointMid UBPLandscapeCullStaticMeshComponent_C
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
local ABPVisCanal_C = {}

function ABPVisCanal_C:ReceiveBeginPlay() end
---@param SplineDataComponent USplineDataComponent
function ABPVisCanal_C:OnShapeUpdated_Event(SplineDataComponent) end
---@param EntryPoint int32
function ABPVisCanal_C:ExecuteUbergraph_BPVisCanal(EntryPoint) end



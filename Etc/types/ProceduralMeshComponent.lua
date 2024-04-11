---@meta

---@class FProcMeshSection
---@field ProcVertexBuffer TArray<FProcMeshVertex>
---@field ProcIndexBuffer TArray<uint32>
---@field SectionLocalBox FBox
---@field bEnableCollision boolean
---@field bSectionVisible boolean
FProcMeshSection = {}



---@class FProcMeshTangent
---@field TangentX FVector
---@field bFlipTangentY boolean
FProcMeshTangent = {}



---@class FProcMeshVertex
---@field Position FVector
---@field Normal FVector
---@field Tangent FProcMeshTangent
---@field Color FColor
---@field UV0 FVector2D
---@field UV1 FVector2D
---@field UV2 FVector2D
---@field UV3 FVector2D
FProcMeshVertex = {}



---@class UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary
UKismetProceduralMeshLibrary = {}

---@param InProcMesh UProceduralMeshComponent
---@param PlanePosition FVector
---@param PlaneNormal FVector
---@param bCreateOtherHalf boolean
---@param OutOtherHalfProcMesh UProceduralMeshComponent
---@param CapOption EProcMeshSliceCapOption
---@param CapMaterial UMaterialInterface
function UKismetProceduralMeshLibrary:SliceProceduralMesh(InProcMesh, PlanePosition, PlaneNormal, bCreateOtherHalf, OutOtherHalfProcMesh, CapOption, CapMaterial) end
---@param InMesh UStaticMesh
---@param LODIndex int32
---@param SectionIndex int32
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param UVs TArray<FVector2D>
---@param Tangents TArray<FProcMeshTangent>
function UKismetProceduralMeshLibrary:GetSectionFromStaticMesh(InMesh, LODIndex, SectionIndex, Vertices, Triangles, Normals, UVs, Tangents) end
---@param InProcMesh UProceduralMeshComponent
---@param SectionIndex int32
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param UVs TArray<FVector2D>
---@param Tangents TArray<FProcMeshTangent>
function UKismetProceduralMeshLibrary:GetSectionFromProceduralMesh(InProcMesh, SectionIndex, Vertices, Triangles, Normals, UVs, Tangents) end
---@param BoxRadius FVector
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param UVs TArray<FVector2D>
---@param Tangents TArray<FProcMeshTangent>
function UKismetProceduralMeshLibrary:GenerateBoxMesh(BoxRadius, Vertices, Triangles, Normals, UVs, Tangents) end
---@param NumX int32
---@param NumY int32
---@param Triangles TArray<int32>
---@param Vertices TArray<FVector>
---@param UVs TArray<FVector2D>
---@param GridSpacing float
function UKismetProceduralMeshLibrary:CreateGridMeshWelded(NumX, NumY, Triangles, Vertices, UVs, GridSpacing) end
---@param NumX int32
---@param NumY int32
---@param bWinding boolean
---@param Triangles TArray<int32>
function UKismetProceduralMeshLibrary:CreateGridMeshTriangles(NumX, NumY, bWinding, Triangles) end
---@param NumX int32
---@param NumY int32
---@param Triangles TArray<int32>
---@param Vertices TArray<FVector>
---@param UVs TArray<FVector2D>
---@param UV1s TArray<FVector2D>
---@param GridSpacing float
function UKismetProceduralMeshLibrary:CreateGridMeshSplit(NumX, NumY, Triangles, Vertices, UVs, UV1s, GridSpacing) end
---@param StaticMeshComponent UStaticMeshComponent
---@param LODIndex int32
---@param ProcMeshComponent UProceduralMeshComponent
---@param bCreateCollision boolean
function UKismetProceduralMeshLibrary:CopyProceduralMeshFromStaticMeshComponent(StaticMeshComponent, LODIndex, ProcMeshComponent, bCreateCollision) end
---@param Triangles TArray<int32>
---@param Vert0 int32
---@param Vert1 int32
---@param Vert2 int32
---@param Vert3 int32
function UKismetProceduralMeshLibrary:ConvertQuadToTriangles(Triangles, Vert0, Vert1, Vert2, Vert3) end
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param UVs TArray<FVector2D>
---@param Normals TArray<FVector>
---@param Tangents TArray<FProcMeshTangent>
function UKismetProceduralMeshLibrary:CalculateTangentsForMesh(Vertices, Triangles, UVs, Normals, Tangents) end


---@class UProceduralMeshComponent : UMeshComponent
---@field bUseComplexAsSimpleCollision boolean
---@field bUseAsyncCooking boolean
---@field ProcMeshBodySetup UBodySetup
---@field ProcMeshSections TArray<FProcMeshSection>
---@field CollisionConvexElems TArray<FKConvexElem>
---@field LocalBounds FBoxSphereBounds
---@field AsyncBodySetupQueue TArray<UBodySetup>
UProceduralMeshComponent = {}

---@param SectionIndex int32
---@param Vertices TArray<FVector>
---@param Normals TArray<FVector>
---@param UV0 TArray<FVector2D>
---@param UV1 TArray<FVector2D>
---@param UV2 TArray<FVector2D>
---@param UV3 TArray<FVector2D>
---@param VertexColors TArray<FLinearColor>
---@param Tangents TArray<FProcMeshTangent>
---@param bSRGBConversion boolean
function UProceduralMeshComponent:UpdateMeshSection_LinearColor(SectionIndex, Vertices, Normals, UV0, UV1, UV2, UV3, VertexColors, Tangents, bSRGBConversion) end
---@param SectionIndex int32
---@param Vertices TArray<FVector>
---@param Normals TArray<FVector>
---@param UV0 TArray<FVector2D>
---@param VertexColors TArray<FColor>
---@param Tangents TArray<FProcMeshTangent>
function UProceduralMeshComponent:UpdateMeshSection(SectionIndex, Vertices, Normals, UV0, VertexColors, Tangents) end
---@param SectionIndex int32
---@param bNewVisibility boolean
function UProceduralMeshComponent:SetMeshSectionVisible(SectionIndex, bNewVisibility) end
---@param SectionIndex int32
---@return boolean
function UProceduralMeshComponent:IsMeshSectionVisible(SectionIndex) end
---@return int32
function UProceduralMeshComponent:GetNumSections() end
---@param SectionIndex int32
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param UV0 TArray<FVector2D>
---@param UV1 TArray<FVector2D>
---@param UV2 TArray<FVector2D>
---@param UV3 TArray<FVector2D>
---@param VertexColors TArray<FLinearColor>
---@param Tangents TArray<FProcMeshTangent>
---@param bCreateCollision boolean
---@param bSRGBConversion boolean
function UProceduralMeshComponent:CreateMeshSection_LinearColor(SectionIndex, Vertices, Triangles, Normals, UV0, UV1, UV2, UV3, VertexColors, Tangents, bCreateCollision, bSRGBConversion) end
---@param SectionIndex int32
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param UV0 TArray<FVector2D>
---@param VertexColors TArray<FColor>
---@param Tangents TArray<FProcMeshTangent>
---@param bCreateCollision boolean
function UProceduralMeshComponent:CreateMeshSection(SectionIndex, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, bCreateCollision) end
---@param SectionIndex int32
function UProceduralMeshComponent:ClearMeshSection(SectionIndex) end
function UProceduralMeshComponent:ClearCollisionConvexMeshes() end
function UProceduralMeshComponent:ClearAllMeshSections() end
---@param ConvexVerts TArray<FVector>
function UProceduralMeshComponent:AddCollisionConvexMesh(ConvexVerts) end



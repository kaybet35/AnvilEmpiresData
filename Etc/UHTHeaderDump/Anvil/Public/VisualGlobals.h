#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilFactionId -FallbackName=EAnvilFactionId
#include "VisualGlobals.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class ANVIL_API AVisualGlobals : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoundationDecorSnapRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> AutoCreateDynamicInstancedMeshGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilFactionId, UMaterialInterface*> TownAreaDecalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilFactionId, UMaterialInterface*> FamilyAreaDecalMap;
    
    AVisualGlobals(const FObjectInitializer& ObjectInitializer);

};


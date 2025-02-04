#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
#include "InstancePointDamageSignatureDelegate.h"
#include "InstanceRadialDamageSignatureDelegate.h"
#include "FoliageInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FOLIAGE_API UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancePointDamageSignature OnInstanceTakePointDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceRadialDamageSignature OnInstanceTakeRadialDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiscardOnLoad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GenerationGuid;
    
public:
    UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};


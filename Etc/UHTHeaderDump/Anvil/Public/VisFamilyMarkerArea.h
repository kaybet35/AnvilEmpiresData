#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFamilyMarkerArea.generated.h"

class UDecalComponent;
class UFamilyAreaMarkerDataComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class ANVIL_API AVisFamilyMarkerArea : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFamilyAreaMarkerDataComponent* FamilyAreaMarkerDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* BuildAreaDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildAreaDecalAranic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildAreaDecalMirrish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildAreaDecalNovan;
    
public:
    AVisFamilyMarkerArea(const FObjectInitializer& ObjectInitializer);

};


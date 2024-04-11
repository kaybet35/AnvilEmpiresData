#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LandscapeSplineInterface.h"
#include "LandscapeSplineActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class ALandscapeSplineActor : public AActor, public ILandscapeSplineInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LandscapeGuid;
    
public:
    ALandscapeSplineActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


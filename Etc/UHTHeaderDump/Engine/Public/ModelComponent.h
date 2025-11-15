#pragma once
#include "CoreMinimal.h"
#include "Interface_CollisionDataProvider.h"
#include "PrimitiveComponent.h"
#include "ModelComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UModelComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* ModelBodySetup;
    
    UModelComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


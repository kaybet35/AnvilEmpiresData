#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintInstance.h"
#include "ConstraintProfileProperties.h"
#include "PhysicsConstraintProfileHandle.h"
#include "PhysicsConstraintTemplate.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPhysicsConstraintTemplate : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintInstance DefaultInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsConstraintProfileHandle> ProfileHandles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FConstraintProfileProperties DefaultProfile;
    
public:
    UPhysicsConstraintTemplate();

};


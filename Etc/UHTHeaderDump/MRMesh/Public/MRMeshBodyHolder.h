#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
#include "MRMeshBodyHolder.generated.h"

class UBodySetup;

UCLASS(Blueprintable, Transient)
class UMRMeshBodyHolder : public UObject, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBodyInstance BodyInstance;
    
    UMRMeshBodyHolder();


    // Fix for true pure virtual functions not being implemented
};


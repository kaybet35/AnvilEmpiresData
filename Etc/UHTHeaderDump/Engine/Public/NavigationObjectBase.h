#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "NavAgentInterface.h"
#include "NavigationObjectBase.generated.h"

class UBillboardComponent;
class UCapsuleComponent;

UCLASS(Abstract, Blueprintable)
class ENGINE_API ANavigationObjectBase : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* GoodSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BadSprite;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPIEPlayerStart: 1;
    
    ANavigationObjectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


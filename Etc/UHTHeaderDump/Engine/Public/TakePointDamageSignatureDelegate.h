#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TakePointDamageSignatureDelegate.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_NineParams(FTakePointDamageSignatureUObject*, EnterPropertyName, AActor*, DamagedActor, float, Damage, AController*, InstigatedBy, FVector, HitLocation, UPrimitiveComponent*, FHitComponent, FName, BoneName, FVector, ShotFromDirection, const UDamageType*, DamageType, AActor*, DamageCauser);


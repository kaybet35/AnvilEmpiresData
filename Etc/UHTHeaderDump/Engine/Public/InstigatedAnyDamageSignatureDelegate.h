#pragma once
#include "CoreMinimal.h"
#include "InstigatedAnyDamageSignatureDelegate.generated.h"

class AActor;
class UDamageType;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInstigatedAnyDamageSignature, float, Damage, const UDamageType*, DamageType, AActor*, DamagedActor, AActor*, DamageCauser);


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintsManager.generated.h"

class UTickableConstraint;

UCLASS(Blueprintable)
class CONSTRAINTS_API UConstraintsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstraintAdded OnConstraintAdded_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstraintRemoved OnConstraintRemoved_BP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTickableConstraint*> Constraints;
    
public:
    UConstraintsManager();

};


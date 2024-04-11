#pragma once
#include "CoreMinimal.h"
#include "EControlRigComponentMapDirection.h"
#include "ERigElementType.h"
#include "ControlRigComponentMappedComponent.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FControlRigComponentMappedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ElementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigComponentMapDirection Direction;
    
    CONTROLRIG_API FControlRigComponentMappedComponent();
};


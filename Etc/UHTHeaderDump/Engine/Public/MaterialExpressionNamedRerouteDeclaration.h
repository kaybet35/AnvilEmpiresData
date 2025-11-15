#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ExpressionInput.h"
#include "MaterialExpressionNamedRerouteBase.h"
#include "MaterialExpressionNamedRerouteDeclaration.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UMaterialExpressionNamedRerouteDeclaration : public UMaterialExpressionNamedRerouteBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NodeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid VariableGuid;
    
    UMaterialExpressionNamedRerouteDeclaration();

};


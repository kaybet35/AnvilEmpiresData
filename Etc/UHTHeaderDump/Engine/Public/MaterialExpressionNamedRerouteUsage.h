#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionNamedRerouteBase.h"
#include "MaterialExpressionNamedRerouteUsage.generated.h"

class UMaterialExpressionNamedRerouteDeclaration;

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UMaterialExpressionNamedRerouteUsage : public UMaterialExpressionNamedRerouteBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpressionNamedRerouteDeclaration* Declaration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DeclarationGuid;
    
    UMaterialExpressionNamedRerouteUsage();

};


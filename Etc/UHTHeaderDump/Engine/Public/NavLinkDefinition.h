#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationLink.h"
#include "NavigationSegmentLink.h"
#include "NavLinkDefinition.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UNavLinkDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationLink> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationSegmentLink> SegmentLinks;
    
    UNavLinkDefinition();

};


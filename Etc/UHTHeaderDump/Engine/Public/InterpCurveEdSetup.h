#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CurveEdTab.h"
#include "InterpCurveEdSetup.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterpCurveEdSetup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveEdTab> Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveTab;
    
    UInterpCurveEdSetup();

};


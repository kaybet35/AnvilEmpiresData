#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClass.h"
#include "MetasoundFrontendGraph.h"
#include "MetasoundFrontendGraphClassPresetOptions.h"
#include "MetasoundFrontendGraphClass.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendGraphClass : public FMetasoundFrontendClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendGraph Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendGraphClassPresetOptions PresetOptions;
    
    FMetasoundFrontendGraphClass();
};


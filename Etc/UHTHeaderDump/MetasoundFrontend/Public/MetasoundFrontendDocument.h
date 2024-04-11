#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClass.h"
#include "MetasoundFrontendDocumentMetadata.h"
#include "MetasoundFrontendGraphClass.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendDocument.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendDocument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendDocumentMetadata MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMetasoundFrontendVersion> Interfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendGraphClass RootGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendGraphClass> Subgraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendClass> Dependencies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion ArchetypeVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendVersion> InterfaceVersions;
    
public:
    FMetasoundFrontendDocument();
};


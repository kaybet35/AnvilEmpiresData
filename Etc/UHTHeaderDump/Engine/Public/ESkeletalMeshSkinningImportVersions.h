#pragma once
#include "CoreMinimal.h"
#include "ESkeletalMeshSkinningImportVersions.generated.h"

UENUM(BlueprintType)
enum class ESkeletalMeshSkinningImportVersions : uint8 {
    Before_Versionning,
    SkeletalMeshBuildRefactor,
    VersionPlusOne,
    LatestVersion = SkeletalMeshBuildRefactor,
};


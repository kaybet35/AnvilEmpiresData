#pragma once
#include "CoreMinimal.h"
#include "EGLTFMaterialBakeSizePOT.generated.h"

UENUM(BlueprintType)
enum class EGLTFMaterialBakeSizePOT : uint8 {
    POT_1,
    POT_2,
    POT_4,
    POT_8,
    POT_16,
    POT_32,
    POT_64,
    POT_128,
    POT_256,
    POT_512,
    POT_1024,
    POT_2048,
    POT_4096,
    POT_8192,
};


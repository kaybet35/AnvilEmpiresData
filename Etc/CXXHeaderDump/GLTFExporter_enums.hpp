enum class EGLTFMaterialBakeMode {
    Disabled = 0,
    Simple = 1,
    UseMeshData = 2,
    EGLTFMaterialBakeMode_MAX = 3,
};

enum class EGLTFMaterialBakeSizePOT {
    POT_1 = 0,
    POT_2 = 1,
    POT_4 = 2,
    POT_8 = 3,
    POT_16 = 4,
    POT_32 = 5,
    POT_64 = 6,
    POT_128 = 7,
    POT_256 = 8,
    POT_512 = 9,
    POT_1024 = 10,
    POT_2048 = 11,
    POT_4096 = 12,
    POT_8192 = 13,
    POT_MAX = 14,
};

enum class EGLTFMaterialPropertyGroup {
    None = 0,
    BaseColorOpacity = 1,
    MetallicRoughness = 2,
    EmissiveColor = 3,
    Normal = 4,
    AmbientOcclusion = 5,
    ClearCoatRoughness = 6,
    ClearCoatBottomNormal = 7,
    EGLTFMaterialPropertyGroup_MAX = 8,
};

enum class EGLTFMaterialVariantMode {
    None = 0,
    Simple = 1,
    UseMeshData = 2,
    EGLTFMaterialVariantMode_MAX = 3,
};

enum class EGLTFSceneMobility {
    None = 0,
    Static = 1,
    Stationary = 2,
    Movable = 4,
    All = 7,
    EGLTFSceneMobility_MAX = 8,
};

enum class EGLTFTextureHDREncoding {
    None = 0,
    RGBM = 1,
    EGLTFTextureHDREncoding_MAX = 2,
};

enum class EGLTFTextureImageFormat {
    None = 0,
    PNG = 1,
    JPEG = 2,
    EGLTFTextureImageFormat_MAX = 3,
};

enum class EGLTFTextureType {
    None = 0,
    HDR = 1,
    Normalmaps = 2,
    Lightmaps = 4,
    All = 7,
    EGLTFTextureType_MAX = 8,
};

enum class EGLTFVariantSetsMode {
    None = 0,
    Khronos = 1,
    Epic = 2,
    EGLTFVariantSetsMode_MAX = 3,
};


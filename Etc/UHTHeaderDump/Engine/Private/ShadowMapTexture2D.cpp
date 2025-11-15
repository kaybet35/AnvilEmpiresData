#include "ShadowMapTexture2D.h"

UShadowMapTexture2D::UShadowMapTexture2D() {
    this->LODGroup = TEXTUREGROUP_Shadowmap;
    this->ShadowmapFlags = SMF_None;
}



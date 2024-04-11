#include "AnimNode_Mirror_Standalone.h"

FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone() {
    this->bMirror = false;
    this->MirrorDataTable = NULL;
    this->BlendTime = 0.00f;
    this->bResetChild = false;
    this->bBoneMirroring = false;
    this->bCurveMirroring = false;
    this->bAttributeMirroring = false;
}


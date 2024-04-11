#include "LevelSequenceAnimSequenceLinkItem.h"

FLevelSequenceAnimSequenceLinkItem::FLevelSequenceAnimSequenceLinkItem() {
    this->bExportTransforms = false;
    this->bExportMorphTargets = false;
    this->bExportAttributeCurves = false;
    this->bExportMaterialCurves = false;
    this->Interpolation = EAnimInterpolationType::Linear;
    this->CurveInterpolation = RCIM_Linear;
    this->bRecordInWorldSpace = false;
    this->bEvaluateAllSkeletalMeshComponents = false;
}


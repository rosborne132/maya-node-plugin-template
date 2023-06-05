#pragma once

#include <maya/MPxNode.h>
#include <maya/MTypeId.h>

class CustomNode : public MPxNode {
public:
  static MTypeId typeId;

  virtual MStatus compute(const MPlug &plug, MDataBlock &dataBlock);
  static void *creator() { return new CustomNode; };
  static MStatus initialize();
};

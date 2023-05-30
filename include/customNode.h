#pragma once

#include <maya/MPxNode.h>
#include <maya/MTypeId.h>

class CustomNode : public MPxNode {
public:
  // The node id
  static MTypeId typeId;
  // Output attribute holding the computed data
  static MObject outputVal;

  virtual MStatus compute(const MPlug &plug, MDataBlock &dataBlock);
  static void *creator() { return new CustomNode(); };
  static MStatus initialize();
};

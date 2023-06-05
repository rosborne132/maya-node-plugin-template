#include <maya/MObject.h>
#include <maya/MPlug.h>

#include "customNode.h"

MTypeId CustomNode::typeId(0x80004);

MStatus CustomNode::initialize() {
  MStatus status = MS::kSuccess;

  // Initialize inputs

  return status;
}

MStatus CustomNode::compute(const MPlug &plug, MDataBlock &dataBlock) {

  // Compute code

  return MS::kSuccess;
}

#include <maya/MFnPlugin.h>

#include "customNode.h"

MStatus initializePlugin(MObject obj) {
  MStatus status;
  MFnPlugin fnPlugin(obj, "Autodesk", "1.0", "Any", &status);
  CHECK_MSTATUS_AND_RETURN_IT(status);

  status = fnPlugin.registerNode("CustomNode", CustomNode::typeId,
                                 CustomNode::creator, CustomNode::initialize,
                                 MPxNode::kDependNode);
  CHECK_MSTATUS_AND_RETURN_IT(status);

  return status;
}

MStatus uninitializePlugin(MObject obj) {
  MFnPlugin fnPlugin(obj);
  CHECK_MSTATUS_AND_RETURN_IT(fnPlugin.deregisterNode(CustomNode::typeId));

  return MS::kSuccess;
}

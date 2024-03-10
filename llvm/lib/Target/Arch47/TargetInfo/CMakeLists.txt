add_llvm_component_library(LLVMArch47Info
  Arch47TargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  Arch47
)
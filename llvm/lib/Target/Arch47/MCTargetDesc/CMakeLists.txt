add_llvm_component_library(LLVMArch47Desc
  Arch47MCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  Arch47Info

  ADD_TO_COMPONENT
  Arch47
 )

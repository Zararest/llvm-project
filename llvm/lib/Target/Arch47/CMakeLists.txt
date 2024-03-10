add_llvm_component_group(Arch47)

add_llvm_target(Arch47CodeGen
  Arch47TargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  Arch47Info

  ADD_TO_COMPONENT
  Arch47
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
#include "TargetInfo/Arch47TargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

namespace llvm {

Target &getTheArch47Target() {
  static Target TheArch47Target;
  return TheArch47Target;
}

extern "C" LLVM_EXTERNAL_VISIBILITY 
void LLVMInitializeArch47TargetInfo() {
  RegisterTarget<Triple::arch47> X(getTheArch47Target(), 
                                   /*Name*/ "Arch47", 
                                   /*ShortDesc*/ "arch47 64",
                                   /*BackendName*/ "ARCH47");
}

} // namespace llvm

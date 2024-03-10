#ifndef LLVM_LIB_TARGET_ARCH47_ARCH47TARGETMACHINE_H
#define LLVM_LIB_TARGET_ARCH47_ARCH47TARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/CodeGen.h"
#include <optional>

namespace llvm {
extern Target TheArch47Target;

class Arch47TargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
public:
  Arch47TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                      bool JIT, bool isLittle);

  Arch47TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                      bool JIT);

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // namespace llvm

#endif // LLVM_LIB_TARGET_ARCH47_ARCH47TARGETMACHINE_H
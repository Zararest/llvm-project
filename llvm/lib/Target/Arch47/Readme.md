# Target description
`Arch 47` is an architecture with 47 entities.

## Build
```
mkdir ./llvm/build
cd ./llvm/build
cmake -DLLVM_ENABLE_PROJECTS=clang -DCMAKE_BUILD_TYPE=Release    -DLLVM_EXPERIMENTAL_TARGETS_TO_BUILD="Arch47"  ..
make -j 8
```
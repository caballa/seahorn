#pragma once
#include "llvm/InitializePasses.h"
namespace llvm {
void initializeSimpleMemoryCheckPass(PassRegistry &);
void initializeFatBufferBoundsCheckPass(PassRegistry &);
}
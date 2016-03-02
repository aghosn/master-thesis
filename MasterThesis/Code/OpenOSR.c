/* @brief Insert an open OSR point in a function.
/*
/* @param Context LLVM Context to use for OSRKit.
/* @param F Source function where to insert the OSR point.
/* @param OSRSrc Instruction in @F to take an OSR decision for.
/* @param extraInfo Address of the auxiliary data structure to pass to
/* the code generator.
/* @param cond Condition to evaluate in order to take an OSR decision.
/* @param profDataVal Value to profile at the OSR point; use @c nullptr
/* when no Value needs to be profiled.
/* @param destFunGenerator Code generator to invoke when the OSR is
/* fired.
/* @param valuesToTransfer Custom set of values to transfer at the OSR.
/* point; use @c nullptr to transfer all the live values.
/* @param LA LivenessAnalysis results computed for @F.
/* @param config Additional settings for the OSR point insertion.
/* @return A pair in which the first element is the function with the
/* inserted OSR point and the second is the OSR stub function.
 */
static OSRPair insertOpenOSR(llvm::LLVMContext& Context, llvm::Function& F,
                             llvm::Instruction& OSRSrc, void* extraInfo,
                             OSRCond& cond, llvm::Value* profDataVal,
                             DestFunGenerator destFunGenerator,
                             std::vector<llvm::Value*>* valuesToTransfer,
                             LivenessAnalysis* LA, OSRPointConfig& config);
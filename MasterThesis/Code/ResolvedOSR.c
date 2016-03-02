/* @brief Insert a resolved OSR point in a function.
/*
/* @param Context LLVM Context to use for OSRKit.
/* @param F1 Source function where to insert the OSR point.
/* @param OSRSrc Instruction in @F1 to take an OSR decision for.
/* @param F2 Target function for the OSR transition.
/* @param LPad Landing pad in @F2 where to resume the execution at.
/* @param cond Condition to evaluate in order to take an OSR decision.
/* @param M StateMap object between @F1 and @F2.
/* @param config Additional settings for the OSR point insertion.
/* @return A pair in which the first element is the function with the
/* inserted OSR point and the second is the OSR continuation function.
 */
static OSRPair insertResolvedOSR(
                    llvm::LLVMContext &Context, llvm::Function &F1,
                    llvm::Instruction &OSRSrc, llvm::Function &F2,
                    llvm::Instruction &LPad, OSRCond &cond,
                    StateMap &M, OSRPointConfig &config);
/**
 * @brief      Enables to clone an LLVM Function.
 *
 * @param      base        The function to clone.
 * @param[in]  instrument  If set at true, the instrumentation for
 * 						   patchpoints and safepoints inside the function
 * 						   are left untouched.
 * 						   If set at false, the instrumentation is removed.
 *
 * @return     The LLVM cloned function.
 */
llvm::Function *clone(llvm::Function *base, bool instrument = true);
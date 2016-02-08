/**
 * @brief      Returns a non-instrumented version
 * 			   of the function contained in the closure.
 * 
 *
 * @param[in]  closure  SEXP of type CLOSXP.
 * @param      c        Current compiler instance pointer. 
 *
 * @return     A function SEXP containing uninstrumented LLVM IR.
 */
static SEXP getFreshIR(SEXP closure, rjit::Compiler* c);
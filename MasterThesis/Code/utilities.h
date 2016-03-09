/**
 * @brief      Adds a function SEXP to the current compilation module.
 *
 * @param  	   f     The SEXP of type NATIVESXP to add to the module.
 * @param      m     The LLVM module.
 */
static void addSexpToModule(SEXP f, Module *m);

/**
 * @brief      Corrects the LLVM IR of a function so that it compiles in 
 * the current compilation module.
 *
 * @param      func  A function SEXP of type NATIVESXP.
 * @param      c     The current instance of the compiler.
 *
 * @return     The corrected SEXP.
 */
static SEXP resetSafepoints(SEXP func, rjit::Compiler *c);

/**
 * @brief      Schedules a function SEXP for relocation, i.e., enables 
 * to load the native code inside the SEXP CDR 
 * once the compilation is over.
 *
 * @param      formals  Formals of the enclosing closure of the function.
 * @param      fun      Function SEXP of type NATIVESXP.
 * @param      m        The current module of compilation.
 */
static void addRelocations(SEXP formals, SEXP fun, rjit::JITModule *m);

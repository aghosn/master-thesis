/**
 * @brief      Creates a copy of a function SEXP with a new LLVM function.
 *
 * @param[in]  func  SEXP that we want to copy.
 * @param      llvm  Function* to put inside the copied SEXP.
 *
 * @return     The new copy of the SEXP, containing the LLVM Function.
 */
static SEXP cloneSEXP(SEXP func, Function *llvm);

/**
 * @brief      Adds a function SEXP to the current compilation module.
 *
 * @param[in]  f     The SEXP of type NATIVESXP to add to the module.
 * @param      m     The LLVM module.
 */
static void addSexpToModule(SEXP f, Module *m);

/**
 * @brief      Corrects the LLVM IR of a function so that it compiles in 
 * the current compilation module.
 *
 * @param[in]  func  A function SEXP of type NATIVESXP.
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
 * @param[in]  formals  Formals of the enclosing closure of the function.
 * @param[in]  fun      Function SEXP of type NATIVESXP.
 * @param      m        The current module of compilation.
 */
static void addRelocations(SEXP formals, SEXP fun, rjit::JITModule *m);

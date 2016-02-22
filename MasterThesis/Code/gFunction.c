define SEXP @g(SEXP %consts, SEXP %rho, i32 %useCache) #0 gc "rjit" {
start:
  %f = call SEXP @getFunction(SEXP %rho, SEXP %consts, i32 1)
  %0 = call SEXP @userLiteral(SEXP %consts, i32 2)
  %1 = call SEXP @constant(SEXP %consts, i32 3)
  %2 = call SEXP @icStub_1(SEXP %0, SEXP %1, SEXP %f, SEXP %rho, SEXP (SEXP, SEXP, i32) @g, i64 0)
  ret SEXP %2
}
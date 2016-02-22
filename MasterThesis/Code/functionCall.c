> f <- function(a) g(a)

define SEXP @f(SEXP %consts, SEXP %rho, i32 %useCache) #0 gc "rjit" {
start:
  %g = call SEXP @getFunction(SEXP %rho, SEXP %consts, i32 1) 
  %0 = call SEXP @userLiteral(SEXP %consts, i32 2)
  %1 = call SEXP @constant(SEXP %consts, i32 0)
  %2 = call SEXP @icStub_1(SEXP %0, SEXP %1, SEXP %g, SEXP %rho, SEXP (SEXP, SEXP, i32)* @f, i64 0)
  ret SEXP %2
}
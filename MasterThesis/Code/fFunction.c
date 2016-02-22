define SEXP @f(SEXP %consts, SEXP %rho, i32 %useCache) #0 gc "rjit" {
start:
  %a = call SEXP @genericGetVar(SEXP %rho, SEXP* %consts, i32 1)
  %0 = call SEXP @userLiteral(SEXP %consts, i32 2) 
  %1 = call SEXP @genericAdd(SEXP %a, SEXP %0, SEXP %rho, SEXP %consts, i32 3)
  ret SEXP %1
}
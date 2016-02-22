define SEXP @fopt(SEXP %consts, SEXP %rho, i32 %useCache) #0 gc "rjit" {
start:
  %f = call SEXP @getFunction(SEXP %rho, SEXP %consts, i32 1)
  %0 = call SEXP @userLiteral(SEXP %consts, i32 2)
  %1 = icmp ne SEXP %f, inttoptr (i64 29386112 to SEXP)
  br i1 %1, label %OSR_fire, label %OSR_split

OSR_split:                                        ; preds = %start
  %2 = call SEXP @constant(SEXP %consts, i32 0)
  %3 = call SEXP @CONS_NR(SEXP %0, SEXP inttoptr (i64 10377064 to SEXP))
  %4 = call SEXP @closureQuickArgumentAdaptor(SEXP %f, SEXP %3)
  br label %start.1

start.1:                                          ; preds = %OSR_split
  %a = call SEXP @genericGetVar(SEXP %4, SEXP %consts, i32 4)
  %5 = call SEXP @userLiteral(SEXP %consts, i32 5)
  %6 = call SEXP @genericAdd(SEXP %a, SEXP %5, SEXP %4, SEXP %consts, i32 3)
  br label %CONTINUATION

CONTINUATION:                                     ; preds = %start.1
  %OSRInlineMerge = phi SEXP [ %6, %start.1 ]
  ret SEXP %OSRInlineMerge, !r_ir_type !3

OSR_fire:                                         ; preds = %start
  %OSRRet = call SEXP @OSRCont_rfunction.1.2(SEXP %consts, SEXP %rho, SEXP %0, SEXP %f)
  ret SEXP %OSRRet
}
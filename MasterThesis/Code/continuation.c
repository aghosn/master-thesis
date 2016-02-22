define SEXP @OSRCont_rfunction.1.2(SEXP %consts_osr, SEXP %rho_osr, SEXP %anon_osr, SEXP %f_osr) gc "rjit" {
OSR_entry:
  call void @compensation(i64 1)
  br label %OSRCont_split

start:                                            ; No predecessors!
  %f = call SEXP @getFunction(SEXP %rho_osr, SEXP %consts_osr, i32 1)
  %0 = call SEXP @userLiteral(SEXP %consts_osr, i32 2)
  br label %OSRCont_split

OSRCont_split:                                    ; preds = %OSR_entry, %start
  %f_fixSSA = phi SEXP [ %f_osr, %OSR_entry ], [ %f, %start ]
  %anon_fixSSA = phi SEXP [ %anon_osr, %OSR_entry ], [ %0, %start ]
  %1 = call SEXP @constant(SEXP %consts_osr, i32 0)
  %2 = call SEXP @icStub_1(SEXP %anon_fixSSA, SEXP %1, SEXP %f_fixSSA, SEXP %rho_osr, SEXP (SEXP, SEXP, i32)* @rfunction.1.2, i64 0)
  ret SEXP %2
}
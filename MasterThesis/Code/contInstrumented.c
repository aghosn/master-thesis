define @OSRCont(%consts_osr, %rho_osr, %f_osr, %anon_osr) gc "rjit" {
OSR_entry:
  call void @fixClosure(i64 1)
  br label %OSRCont_split

start:                                            ; No predecessors!
  %f = call @getFunction( %rho_osr, %consts_osr, i32 1)
  %0 = call @userLiteral( %consts_osr, i32 2)
  br label %OSRCont_split

OSRCont_split:                                    ; preds = %OSR_entry, %start
  %anon_fixSSA = phi [%anon_osr, %OSR_entry], [%0, %start]
  %f_fixSSA = phi [%f_osr, %OSR_entry], [%f, %start]
  %1 = call @constant(%consts_osr, i32 0)
  %2 = call @icStub_1(%anon_fixSSA, %1, %f_fixSSA, %rho_osr, ( , , i32) @rfunction.1.2, i64 0) 
  ret %2
}
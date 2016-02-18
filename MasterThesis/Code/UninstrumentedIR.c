define %struct.SEXPREC addrspace(1)* @rfunction(%struct.SEXPREC addrspace(1)* %consts, %struct.SEXPREC addrspace(1)* %rho, i32 %useCache) #0 gc "rjit" {
start:
  %a = call %struct.SEXPREC addrspace(1)* @genericGetVar(%struct.SEXPREC addrspace(1)* %rho, %struct.SEXPREC addrspace(1)* %consts, i32 1) #1, !r_ir_type !0
  %0 = call %struct.SEXPREC addrspace(1)* @userLiteral(%struct.SEXPREC addrspace(1)* %consts, i32 2) #1, !r_ir_type !1
  %1 = call %struct.SEXPREC addrspace(1)* @genericAdd(%struct.SEXPREC addrspace(1)* %a, %struct.SEXPREC addrspace(1)* %0, %struct.SEXPREC addrspace(1)* %rho, %struct.SEXPREC addrspace(1)* %consts, i32 0) #1, !r_ir_type !2
  ret %struct.SEXPREC addrspace(1)* %1, !r_ir_type !3
}
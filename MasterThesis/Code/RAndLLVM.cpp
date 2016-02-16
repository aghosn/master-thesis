f <- function(a) {
 a <- 2
 w <- a+2
 g(w*4)
}

define  @f(%consts, %rho, i32 %useCache) #0 gc "rjit" {
start:
  %0 = call  @userLiteral( %consts, i32 1) 
  call void @genericSetVar( %0,  %rho,  %consts, i32 2)
  %a = call  @genericGetVar( %rho,  %consts, i32 2)
  %1 = call  @userLiteral( %consts, i32 3)
  %2 = call  @genericAdd( %a,  %1,  %rho,  %consts, i32 4)
  call void @genericSetVar( %2,  %rho,  %consts, i32 5)
  %g = call  @getFunction( %rho,  %consts, i32 6)
  %3 = call  @userLiteral( %consts, i32 7)
  %4 = call  @constant( %consts, i32 8) 
  %5 = call  @icStub_1( %3, %4, %g, %rho, (@f, i64 0)
  ret  %5
}
f <- function(a) {
 a <- 2
 w <- a+2
 g(w*4)
}

define @f(%consts, %rho, i32 %useCache) #0 gc "rjit" {
start:
  %0 = call @userLiteral(%consts, i32 1)               //get value '2'
  call void @genericSetVar(%0, %rho, %consts, i32 2)   //set 'a' to '2'
  %a = call @genericGetVar(%rho, %consts, i32 2)       //get value for 'a'
  %1 = call @userLiteral(%consts, i32 3)               //get value 'a'
  %2 = call @genericAdd(%a, %1, %rho, %consts, i32 4)  //add 'a' and '2'
  call void @genericSetVar(%2, %rho, %consts, i32 5)   //set 'w' 
  %g = call @getFunction(%rho, %consts, i32 6)         //resolve function 'g'
  %3 = call @userLiteral(%consts, i32 7)               //get 'w*4' promise 
  %4 = call @constant(%consts, i32 8)                  //get constant pool
  %5 = call @icStub_1(%3, %4, %g, %rho, @f)            //call stub for 'g'
  ret  %5
}
f <- function(a) a+1

f_prime <- function(a) {
	for (i in 1:1000) {
		f(i*a)
		f(i*a)
	}
}

g <- function() f_prime(100)


#Force compilaton
g()

#Start chrono
g()
#End chrono
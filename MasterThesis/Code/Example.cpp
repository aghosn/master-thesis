# Base version of g 
g <- function(x) {
	H(f(x))
}

# Unsugared version of g 
g <- function(x) {
	t <- f(x)
	H(t)
}
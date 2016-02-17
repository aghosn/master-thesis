# First optimized version of g
g1 <- function(x) {
	t <- f(x)
	t * (p ^ y)
} 

# Second optimized version of g
g2 <- function(x) {
	t <- f(x)
	t * (3 ^ 4)
}
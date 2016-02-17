f_cont <- function(a,b,c) {
//loads the state from 
//the shared buffer.
	a <- BUFFER[0]
	b <- BUFFER[1]
	c <- BUFFER[2]
	delta <- BUFFER[3]

CONT:
//Replacement for the CONT
	if(delta > 0)
		return pair(a,b,delta)
	else 
		return i(a, b, c, delta)
}
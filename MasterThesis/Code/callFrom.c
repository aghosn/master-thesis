f_from <- function(a, b, c) {
	delta <- b^2 - 4 * a * c
	if(delta != 0)	//OSR_CONDITION
		goto OSR
CONT: 
	x1 <- (-b)/(2*a)
	return [x1]
OSR:
	//live values [a,b,c,delta]
	return f_cont(a,b,c,delta)
}
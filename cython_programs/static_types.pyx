def primes(int m):
	cdef int p[1000]
	for i in range(3 , 1000):
		p[i] = is_prime(i)
	for i in range(2 , m):
		if p[i]:
			print(i)

def is_prime(int n):
	if n==2 :
		return True
	for i in range(2 , n-1):
		if n%i == 0:
			return False
	return True
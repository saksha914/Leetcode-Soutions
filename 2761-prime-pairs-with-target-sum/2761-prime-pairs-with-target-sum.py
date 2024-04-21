class Solution:
    def findPrimePairs(self, n: int) -> List[List[int]]:
        primes = [True] * (n + 1)
        primes[0] = primes[1] = False
        p = 2
        while p * p <= n:
            if primes[p]:
                for i in range(p * p, n + 1, p):
                    primes[i] = False
            p += 1
        ls = [i for i in range(n + 1) if primes[i]]
        res = []
        i = 0
        j = len(ls) - 1
        while i <= j:
            total_sum = ls[i] + ls[j]
            if total_sum == n:
                res.append([ls[i], ls[j]])
                i += 1
                j -= 1
            elif total_sum < n:
                i += 1
            else:
                j -= 1
        return res

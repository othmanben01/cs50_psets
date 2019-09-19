factors' :: Int -> [Int]
prime' :: Int -> Bool
primes' :: Int -> [Int]

factors' n = [x | x <- [1..n], n `mod` x == 0]
primes' n = factors' n == [1,n]
primes' n = [x | x <- [2..n], prime' x]
filter' :: (a -> Bool) -> [a] -> [a]

filter' f xs = [x | x <- xs, f x]
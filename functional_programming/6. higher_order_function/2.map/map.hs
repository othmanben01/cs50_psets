map' :: (a -> a) -> [a] -> [a]

map' f xs = [f x | x <- xs]
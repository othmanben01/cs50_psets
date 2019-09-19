map' :: (a -> a) -> a -> a

map' f [] = []
map' f (x:xs) = f x : map' f xs
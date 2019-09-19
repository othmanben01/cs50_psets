takeWhile' :: (a -> Bool) -> [a] -> [a]

takeWhile' f [] = []
takeWhile' f (x:xs) = if f x == True then x : takeWhile' f xs
                      else []
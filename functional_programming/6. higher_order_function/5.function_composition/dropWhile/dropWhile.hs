isSpace :: Char -> Bool
isSpace x = if x == ' ' then True else False



dropWhile' :: (a -> Bool) -> [a] -> [a]

dropWhile' f [] = []

dropWhile' f (x:xs) | f x = dropWhile' f xs
                    | otherwise = x : dropWhile' f xs

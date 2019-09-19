position' :: Eq a => a -> [a] -> [Int]

position' x xs = [i | (y, i) <- zip xs [0..n], x == y]
                    where n = (length xs) - 1
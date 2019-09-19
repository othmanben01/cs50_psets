sorted' :: Ord a => [a] -> Bool

sorted xs = and [x <= y | (x, y) <- pairs xs]
odd' :: Int -> [Int]

odd' n = map (\x -> x*2 + 1) [0..n-1]
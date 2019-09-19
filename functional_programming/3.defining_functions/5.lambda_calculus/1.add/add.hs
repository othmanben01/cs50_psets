add' :: Num a => a -> a -> a

add' = \x -> (\y -> x + y)

x = add' 5
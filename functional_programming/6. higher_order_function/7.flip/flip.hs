-- Flip simply takes a function and returns a function that is like our original function, only the first two arguments are flipped

flip' :: (a -> b -> c) -> (b -> a -> c)
flip' f = g
    where g x y = f y x

-- flip' :: (a -> b -> c) -> b -> a -> c
-- flip' f y x = f x y

-- ex: flip' zip [1,2,3,4,5] "hello"
--     [('h',1),('e',2),('l',3),('l',4),('o',5)]
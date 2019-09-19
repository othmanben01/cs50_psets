sum' :: (Num a) => [a] -> a

sum' xs = foldl(\acc x -> acc + x) 0 xs


-- we can write it as this

-- Note: The lambda function (\acc x -> acc + x) is the same as (+). We can omit the xs as the parameter because calling
-- foldl (+) 0 will return a function that takes a list. Generally, if you have a function like foo a = bar b a,
-- you can rewrite it as foo = bar b, because of currying.

-- sum' = foldl (+) 0
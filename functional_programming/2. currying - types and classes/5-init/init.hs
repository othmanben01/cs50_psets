init':: [a] => [a]
init2:: [a] => [a]

init' xs = take a xs
    where a = (length xs) - 1

init2 xs = reverse (tail (reverse xs))


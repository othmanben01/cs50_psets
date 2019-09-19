-- guards are also called filters

x = [x | x <- [1..5], even x]
signum' :: Int -> Int

signum' n  | n > 0 = 1
          | n == 0 = 0
          | otherwise = -1
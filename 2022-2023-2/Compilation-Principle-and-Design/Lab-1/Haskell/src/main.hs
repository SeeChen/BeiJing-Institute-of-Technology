import System.Clock
import System.Random

shuffle :: [a] -> IO [a]
shuffle [] = return []
shuffle xs = do
    i <- getStdRandom $ randomR (0, length xs - 1)
    let (left, (a:right)) = splitAt i xs
    fmap (a:) $ shuffle (left ++ right)

quickSort :: Ord a => [a] -> [a]
quickSort [] = []
quickSort (x:xs) =
    let smallerSorted = quickSort [a | a <- xs, a <= x]
        biggerSorted = quickSort [a | a <- xs, a > x]
    in  smallerSorted ++ [x] ++ biggerSorted

sortArray :: Ord a => [a] -> [a]
sortArray arr = quickSort arr

sort :: Int -> Int -> IO ()
sort n count
    | n == 0 = return ()
    | otherwise = do
        let arr = [1..100000]
        shuffledArr <- shuffle arr
        start <- getTime Monotonic
        let sortedArr = sortArray shuffledArr
        end <- getTime Monotonic
        let diff = fromIntegral (toNanoSecs (diffTimeSpec start end)) / 1000000.0
        putStrLn $ show count ++ " : Run Time : " ++ show diff ++ "ms"
        sort (n - 1) (count + 1)

main :: IO ()
main = sort 100 1

main = do
 putStrLn "Your name bro?"
 name <- getLine
 print ("Hey dude " ++ name ++ ", you rock!")

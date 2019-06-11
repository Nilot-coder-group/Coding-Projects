using System;

    class Console_Color_Change
    {
        static void Main(string[] args)
        {
        Console.BackgroundColor = ConsoleColor.White;
        Console.ForegroundColor = ConsoleColor.Black;
        Console.WriteLine("This is Black on White");
        Console.BackgroundColor = ConsoleColor.Blue;
        Console.ForegroundColor = ConsoleColor.White;
        Console.WriteLine("This is White on Blue");        
        Console.ResetColor();
        Console.WriteLine("Back to Normal");
        }
    }

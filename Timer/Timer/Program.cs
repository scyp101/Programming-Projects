using System;
using System.Diagnostics;
using System.Threading;

namespace Timer
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = "stop";
            string firstInput, text;
            int x, elapsed = 90;

            Console.Write("Enter your timer (1sec, 2sec, 5sec, 10sec, 30sec, or 1min) (To exit type stop): ");
            firstInput = Console.ReadLine();

            while (firstInput != "1sec" && firstInput != "2sec" && firstInput != "5sec" && firstInput != "10sec" && firstInput != "30sec" && firstInput != "1min" && firstInput != "stop")
            {
                Console.Write("Enter your timer: ");
                firstInput = Console.ReadLine();
            }

            if (firstInput == a)
            {
                Console.WriteLine("Your timer ran for " + elapsed + " second");
                Console.WriteLine("Program stopped");
            }
            else
            {
                Console.Write("Do you want to add text? (Start typing if you want to) (To use default hit Enter): ");
                text = Console.ReadLine();

                if (text == "")
                {
                    text = "Nice!";
                }

                while (firstInput == "1sec" || firstInput == "2sec" || firstInput == "5sec" || firstInput == "10sec" || firstInput == "30sec" || firstInput == "1min")
                {
                    Console.Write("How many times do you want to run the timer?: ");
                    x = Convert.ToInt32(Console.ReadLine());

                    switch (firstInput)
                    {
                        case "1sec":

                            Stopwatch stopwatch1 = new Stopwatch();
                            stopwatch1.Start();

                            for (int i = 1; i <= x; i++)
                            {
                                Stopwatch stopwatch2 = new Stopwatch();
                                stopwatch2.Start();
                                Thread.Sleep(1000);
                                stopwatch2.Stop();
                                TimeSpan stopwatch2Elapsed = stopwatch2.Elapsed;
                                Console.WriteLine(text);
                            }

                            stopwatch1.Stop();
                            TimeSpan stopwatch1Elapsed = stopwatch1.Elapsed;

                            elapsed = elapsed + Convert.ToInt32(stopwatch1Elapsed.TotalSeconds);
                           
                            firstInput = "";

                            break;

                        case "2sec":

                            Stopwatch stopwatch3 = new Stopwatch();
                            stopwatch3.Start();

                            for (int i = 1; i <= x; i++)
                            {
                                Stopwatch stopwatch4 = new Stopwatch();
                                stopwatch4.Start();
                                Thread.Sleep(2000);
                                stopwatch4.Stop();
                                TimeSpan stopwatch4Elapsed = stopwatch4.Elapsed;
                                Console.WriteLine(text);
                            }

                            stopwatch3.Stop();
                            TimeSpan stopwatch3Elapsed = stopwatch3.Elapsed;

                            elapsed = elapsed + Convert.ToInt32(stopwatch3Elapsed.TotalSeconds);
                            
                            firstInput = "";

                            break;

                        case "5sec":

                            Stopwatch stopwatch5 = new Stopwatch();
                            stopwatch5.Start();

                            for (int i = 1; i <= x; i++)
                            {
                                Stopwatch stopwatch6 = new Stopwatch();
                                stopwatch6.Start();
                                Thread.Sleep(5000);
                                stopwatch6.Stop();
                                TimeSpan stopwatch6Elapsed = stopwatch6.Elapsed;
                                Console.WriteLine(text);
                            }

                            stopwatch5.Stop();
                            TimeSpan stopwatch5Elapsed = stopwatch5.Elapsed;

                            elapsed = elapsed + Convert.ToInt32(stopwatch5Elapsed.TotalSeconds);

                            firstInput = "";

                            break;

                        case "10sec":

                            Stopwatch stopwatch7 = new Stopwatch();
                            stopwatch7.Start();

                            for (int i = 1; i <= x; i++)
                            {
                                Stopwatch stopwatch8 = new Stopwatch();
                                stopwatch8.Start();
                                Thread.Sleep(10000);
                                stopwatch8.Stop();
                                TimeSpan stopwatch4Elapsed = stopwatch8.Elapsed;
                                Console.WriteLine(text);
                            }

                            stopwatch7.Stop();
                            TimeSpan stopwatch7Elapsed = stopwatch7.Elapsed;

                            elapsed = elapsed + Convert.ToInt32(stopwatch7Elapsed.TotalSeconds);

                            firstInput = "";

                            break;

                        case "30sec":

                            Stopwatch stopwatch9 = new Stopwatch();
                            stopwatch9.Start();

                            for (int i = 1; i <= x; i++)
                            {
                                Stopwatch stopwatch10 = new Stopwatch();
                                stopwatch10.Start();
                                Thread.Sleep(30000);
                                stopwatch10.Stop();
                                TimeSpan stopwatch10Elapsed = stopwatch10.Elapsed;
                                Console.WriteLine(text);
                            }

                            stopwatch9.Stop();
                            TimeSpan stopwatch9Elapsed = stopwatch9.Elapsed;

                            elapsed = elapsed + Convert.ToInt32(stopwatch9Elapsed.TotalSeconds);

                            firstInput = "";

                            break;

                        case "1min":

                            Stopwatch stopwatch11 = new Stopwatch();
                            stopwatch11.Start();

                            for (int i = 1; i <= x; i++)
                            {
                                Stopwatch stopwatch12 = new Stopwatch();
                                stopwatch12.Start();
                                Thread.Sleep(100000);
                                stopwatch12.Stop();
                                TimeSpan stopwatch6Elapsed = stopwatch12.Elapsed;
                                Console.WriteLine(text);
                            }

                            stopwatch11.Stop();
                            TimeSpan stopwatch11Elapsed = stopwatch11.Elapsed;

                            elapsed = elapsed + Convert.ToInt32(stopwatch11Elapsed.TotalSeconds);

                            firstInput = "";

                            break;
                    }

                    Console.WriteLine("Do you want to continue? If yes, enter your timer otherwise type (stop): ");
                    firstInput = Console.ReadLine();

                    while (firstInput != "1sec" && firstInput != "2sec" && firstInput != "5sec" && firstInput != "10sec" && firstInput != "30sec" && firstInput != "1min" && firstInput != a)
                    {
                        Console.Write("Enter your timer: ");
                        firstInput = Console.ReadLine();
                    }

                    if (firstInput == a)
                    {
                        if (elapsed < 60)
                        {
                            TimeSpan final = TimeSpan.FromSeconds(elapsed);
                            string second = string.Format(new DateTime(final.Ticks).ToString("ss"));
                            Console.WriteLine("Your timer ran for " + second + " seconds");
                        }
                        if (elapsed == 60)
                        {
                            TimeSpan final = TimeSpan.FromSeconds(elapsed);
                            string minute = string.Format(new DateTime(final.Ticks).ToString("mm"));
                            Console.WriteLine("Your timer ran for " + minute + " minute");
                        }
                        if (elapsed >= 60)
                        {
                            TimeSpan final = TimeSpan.FromSeconds(elapsed);
                            string minutes = string.Format(new DateTime(final.Ticks).ToString("mm"));
                            string seconds = string.Format(new DateTime(final.Ticks).ToString("ss"));
                            if (minutes == "01")
                            {
                                Console.WriteLine("Your timer ran for " + minutes + " minute and " + seconds + " seconds");
                            }
                            Console.WriteLine("Your timer ran for " + minutes + " minutes and " + seconds + " seconds");
                        }
                        if (elapsed == 3600)
                        {
                            TimeSpan final = TimeSpan.FromSeconds(elapsed);
                            string txtDate = string.Format(new DateTime(final.Ticks).ToString("hh"));
                            Console.WriteLine("Your timer ran for " + txtDate + " hour");
                        }
                        if (elapsed >= 3600)
                        {
                            TimeSpan final = TimeSpan.FromSeconds(elapsed);
                            string txtDate = string.Format(new DateTime(final.Ticks).ToString("hh:mm:ss"));
                            Console.WriteLine("Your timer ran for " + txtDate + " hours");
                        }

                        Console.WriteLine("Program stopped");
                    }
                }              
            }
        }
    }
}

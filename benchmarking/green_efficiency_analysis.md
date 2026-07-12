# Green Efficiency Analysis Report

## Measurement Methodology
To measure how long different parts of our C program took, I used the `<time.h>` library, specifically the `clock()` function. This function counts the number of clock ticks the CPU uses while running the code.

The way I did it was simple. Before calling a function like `build_dataset()`, I saved the time in a variable using `start = clock()`. Right after the function finished, I saved the time again using `end = clock()`. 

To find out how long the function took, I subtracted `start` from `end`. Since this only gives "ticks", I cast the result to a `double` and divided it by `CLOCKS_PER_SEC` to get real seconds. I did this same process for `process_dataset()` and `reduce_checksum()`. Finally, instead of using `clock()` again for the total time, I just added the three results together (`total = build_data + process + reduce`). This made sure the total was exactly the sum of the three phases.

## Observed Performance Differences
When we tested the algorithms, I saw a huge difference in speed. The first version, which was the unoptimized baseline loop, took about 0.600000 seconds to finish. Less than a second sounds fast, but in computer time, that is very slow.

When we ran the optimized algorithm doing the exact same work, it only took 0.000024 seconds. The bad code was thousands of times slower.

In the main program with 50,000 numbers, measuring `BUILD_DATA`, `PROCESS`, and `REDUCE` showed exactly where the time went. Building and processing data takes the most time because the computer loops through all the numbers and does math. Reducing the data for the checksum is slightly faster. But compared to the 0.6 seconds of the bad code, all these optimized phases ran in tiny fractions of a second.

## Relation Between Runtime and Energy Consumption
There is a clear connection between how long a program runs and how much energy it uses. A CPU needs electricity to work. When a program is running, the CPU is active and pulling more power.

When we ran the unoptimized code, the CPU stayed active for 0.600000 seconds just to finish a simple task. During this time, it is using a lot of electricity. But when we used the optimized code, it finished the job in just 0.000024 seconds. Because it finished so fast, the CPU could go back to a low-power sleep state almost immediately.

This means that writing faster code is a big part of "green computing." By reducing the runtime, we reduce the total amount of energy consumed. If this code was running millions of times on a server, that small difference would save a massive amount of electricity.

## Limitations of the Experiment
Even though our measurements show clear results, the experiment has a few limitations. The biggest one is that my computer is doing other things at the same time. The operating system is running background tasks or checking for updates. Because of this, the `clock()` function might include time where the CPU paused our program to do something else. This means our measured times might be slightly higher than the real execution time.

Another limitation is that we only tested with a static array of 50,000 numbers. If we used a much bigger dataset, the performance gap between the good code and the bad code might look different, and we might face other memory limits.

## Practical Engineering Takeaway
The main thing I learned is that we cannot just guess if our code is fast. We have to actually measure it using tools like `clock()`. A simple mistake in a loop can make the code take 0.6 seconds instead of 0.000024 seconds. As software engineers, it is our job to test our code and make sure it is optimized. Efficient code makes programs run better and helps save energy for the environment.

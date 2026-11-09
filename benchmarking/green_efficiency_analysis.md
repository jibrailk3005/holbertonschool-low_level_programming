# Green Efficiency Analysis

## Measurement Methodology

To understand the execution time of a program, I ran the baseline program three times to get a more representative result. The recorded execution times were 0.228334 seconds, 0.228627 seconds and 0.228582 seconds. The average was approximately 0.228514 seconds.

I decided to run the program three times because execution time can vary between runs. For example, other processes running on the computer may also use CPU resources and affect the results. Taking the average gives us a better idea of the typical execution time instead of relying only on the fastest result.

I also used instrumentation to measure different parts of the program separately:

- TOTAL: 0.000587 seconds
- BUILD_DATA: 0.000220 seconds
- PROCESS: 0.000225 seconds
- REDUCE: 0.000140 seconds

This helped me identify which part took the most time. PROCESS took the longest, while REDUCE took the shortest time.

## Observed Performance Differences

One of the most interesting results was the difference between the naive nested-loop approach and the single-pass approach.

The nested-loop approach took approximately 2.65 seconds, whereas the single-pass approach took only 0.000113 seconds. Based on these measurements, the single-pass approach was approximately 23,451 times faster.

This shows how the way we write our code can have a significant impact on execution time. A nested loop can perform many more operations because one loop runs inside another. A single-pass approach can process the data with fewer operations.

It also shows why understanding the logic behind our code is important before deciding which approach to use.

## Relation Between Runtime and Energy Consumption

I believe software efficiency is important because a program that takes less time to execute can reduce the time the CPU spends processing that task. This may also contribute to reducing energy consumption.

As we become more conscious of the environment, even a small improvement towards more efficient software is encouraged. However, this experiment measured execution time, not actual electricity consumption. Therefore, we cannot say exactly how much energy was saved.

## Limitations of the Experiment

There are some limitations we need to consider. Firstly, we did not directly measure electricity consumption or CPU power usage. Secondly, other processes running on the computer may have affected execution time. Also, although running the baseline program three times gives us a better idea of its performance, more repetitions could provide a more reliable result.

Mentioning these limitations helps us understand how future experiments could be improved. It also allows readers to understand what was measured and which conclusions we can reasonably make.

## Practical Engineering Takeaway

From this experiment, I believe software engineers should always try to understand their code properly before making changes. We should not modify things without having a proper plan or understanding what is happening behind the scenes.

For example, if a nested-loop approach takes more time, we should investigate whether it can be replaced with something more efficient. However, replacing one nested loop with four separate single loops does not automatically make the program more efficient. The four loops could still perform the same amount of work or even more. We need to analyse the number of operations and check whether the change actually improves performance. We must also make sure the new approach produces the same correct result as the original.

My personal way forward is that as I continue learning C and developing my programming skills, I want to build the habit of thinking before writing code. I want to understand what my code does, why I choose a particular approach and what happens behind the scenes when the program executes. Rather than just looking for a solution that works, I want to learn how to analyse different approaches, plan improvements, test my code and use the results to make better decisions.

I also want to remember that software development is not only about producing results. It is about improving performance while being conscious of the resources we use. Even small improvements can make a positive difference, especially when applied across many applications. This is the mindset I want to develop as I move forward in my software engineering journey.

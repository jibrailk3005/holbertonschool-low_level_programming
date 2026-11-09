Run 1

Naive algorithm result: 625025000
Naive algorithm time: 2.652207 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000121 seconds

Run 2
Naive algorithm result: 625025000
Naive algorithm time: 2.654103 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000108 seconds

Run 3 
Naive algorithm result: 625025000
Naive algorithm time: 2.648683 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000109 seconds

Average of Naive algorithms: 2.651664
Average of Single -pass algorithms result:0.000113

The naive algorithm is approximately 23,466 times slower than the single-pass algorithm in your measurements.

Comment: The naive algorithm uses two loops, with one loop running inside the other. This means it repeats many more operations. The single-pass algorithm uses only one loop and checks each number once. Because it does less work, it runs much faster than the naive algorithm.

OpenMP_NarrowPerfectHash
========================

Searching for function parameter that will generate perfect hash values for all python keywords. Concurrent implementation with OpenMP.


## OUTPUT

```python
 11:40:08 jane ~/github/nph > g++ -fopenmp --std=c++11 nph.cpp -o nph
 11:56:38 jane ~/github/nph > ./nph
 Value detected :1948027445
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027446
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027447
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027448
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027449
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Time spent solving (OMP measure) 186.733 seconds.

 11:59:47 jane ~/github/nph > g++ -fopenmp -Ofast --std=c++11 nph.cpp -o nph
 12:00:05 jane ~/github/nph > ./nph
 Value detected :1948027445
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027446
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027447
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027448
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Value detected :1948027449
 1 2 3 4 6 7 8 11 12 13 14 15 16 17 18 19 21 22 23 25 26 27 28 29 30 32 33 34 35 38 39
 Time spent solving (OMP measure) 78.0529 seconds.


```

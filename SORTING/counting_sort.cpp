/*
Think of Counting Sort like sorting items into labeled buckets instead of comparing them one by one.If you have a group of people 
and you want to line them up by height, usually you'd compare Person A to Person B, Person B to Person C, and so on. That
 step-by-step comparison is why most sorting algorithms take $O(n \log n)$ time.Counting Sort skips the comparisons entirely.
How It Works (The 3 Steps)
Imagine you have a list of test scores between 0 and 5:[3, 1, 3, 0, 1]
Step 1: Count Occurrences (The "Bookkeeping" Array)Instead of comparing numbers, you grab a tally sheet (a new array) where 
the index numbers are the possible scores (0 through 5)
:Score 0: 1 studentScore 1: 2 studentsScore 2: 0 studentsScore 3: 2 studentsScore 4: 0 studentsScore 5: 0 students
Your tally sheet looks like this: [1, 2, 0, 2, 0, 0]
Step 2:

Read the Tally SheetNow you don't need the original list anymore. Just look at your tallies in order:Write down 0 (1 time)Write
 down 1 (2 times)Write down 2 (0 times)Write down 3 (2 times)Write down 4 (0 times)Write down 5 (0 times)
Step 3: Done!Your sorted list is: [0, 1, 1, 3, 3]Why is it $O(n)$ time?Scanning the input list to make tallies takes $n$ steps.
Rebuilding the sorted list from the tally sheet takes $n$ steps.$n + n = 2n$, which in time complexity simplifies to $O(n)$ linear
 time.
The Catch (Why don't we use it for everything?)Counting Sort only works under strict conditions:
Only Integers/Keys: The values must be discrete numbers (or things that map directly to array indices, like single letters). You
 can't directly use negative numbers or floating-point decimals as array indices without extra processing
.Small Range ($c \le O(n)$): The highest number can't be too big.Sorting $1,000$ numbers between 1 and 100? Perfect! You only need
 a tally array of size 100.Sorting $5$ numbers like [1, 5, 2, 9, 1,000,000,000]? You would need an array of 1 billion elements 
 just to store tallies for 5 numbers. That wastes massive amounts of memory and time.*/
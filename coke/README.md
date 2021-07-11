# coke

<https://open.kattis.com/problems/coke>

## My Thoughts

This is a dynamic programming problem with each step being one of the following

- Using a ten coin and returning 2 one coins
- Using a five coin and 3 one coins without any return
- Using 2 five coins and returning 2 one coins
- Using 8 one coins without any return

After each step the number of cokes goes down by 1 and the coins change by the given amount. The goal is to find the lowest number of coin insertions to purchase the desired number of cokes.
